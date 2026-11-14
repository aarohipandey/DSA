class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int start=0;
        int min_sum=INT_MAX;
        int n=nums.size();
        for (int start = 0; start < n; start++) {
            int sum = 0;
        for(int end=start;end<n;end++)
        {
            sum+=nums[end];
           int size=end-start+1;
            if(size>=l&&size<=r&&sum>0)
            {
               min_sum=min(min_sum,sum);
            }
            if(size>r)
            break;
        }
        }
        return min_sum == INT_MAX ? -1 : min_sum;

    }
};