//O(n) time O(n) space
vector<int> Solution::spiralOrder(const vector<vector<int> > &nums) {
    
    int t=0;
    int b=nums.size()-1;
    int l=0;
    int r=nums[0].size()-1;
    vector<int> arr;
    int dir=0;
    while(t<=b&&l<=r)
    {
        if(dir==0)
        {
            for(int i=l;i<=r;i++)
                arr.push_back(nums[t][i]);
                t++;
        }
        else if(dir==1)
        {
            for(int i=t;i<=b;i++)
            arr.push_back(nums[i][r]);
            r--;
        }
        else if(dir==2)
        {
            for(int i=r;i>=l;i--)
            arr.push_back(nums[b][i]);
            b--;
        }
        else if(dir==3)
        {
            for(int i=b;i>=t;i--)
            arr.push_back(nums[i][l]);
            l++;
        }
        dir=(dir+1)%4;
    }
    return arr;
    
}
