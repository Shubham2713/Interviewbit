//O(n) time
int Solution::maxSubArray(const vector<int> &nums) {
    int curr_max=nums[0];
    int max_sofar=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++)
    {
        curr_max=max(nums[i],curr_max+nums[i]);
        max_sofar=max(max_sofar,curr_max);
        
    }
    return max_sofar;
}
