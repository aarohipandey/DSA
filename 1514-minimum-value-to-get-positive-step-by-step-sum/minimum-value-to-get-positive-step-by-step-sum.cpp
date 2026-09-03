class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int res=1;
        for(int i=0;i<n;i++)
        {   
            sum=sum+nums[i];
            if(sum<0&&res<-(sum)+1)
            {
                res=-(sum)+1;
            }
    }
    return res;}
};