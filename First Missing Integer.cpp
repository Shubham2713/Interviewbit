//time O(n) space O(1)
int Solution::firstMissingPositive(vector<int> &nums) {
    int n=nums.size();
    
    for(int i=0;i<n;i++)
    {
        if(nums[i]>0&&nums[i]<=n)
        {
            int pos=nums[i]-1;
            if(nums[i]!=nums[pos])
            {swap(nums[i],nums[pos]);
            i--;
            
        }
    }
    }
    for(int i=0;i<n;i++)
    {
        if(nums[i]!=i+1)
        return i+1;
    }
    return n+1;
}

//time O(n) space O(n)

int Solution::firstMissingPositive(vector<int> &nums) {
    
    
    int n=nums.size();
    unordered_set<int> arr;
    int c=0;
    
    for(int i=0;i<n;i++)
    {
        if(nums[i]>0)
        {c++;
        arr.insert(nums[i]);
        }
        
    }
    if(c==0)
    return 1;
    auto it=max_element(nums.begin(),nums.end());
    int max=(*it);
    for(int i=1;i<=max;i++)
    {
        if(arr.count(i)==0)
        return i;
    }
    return max+1;
    
}
