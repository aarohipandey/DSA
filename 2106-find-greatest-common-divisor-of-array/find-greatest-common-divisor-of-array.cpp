class Solution {
public:
    int findGCD(vector<int>& nums) {int n=nums.size();
        int mn=nums[0];
        int mx=nums[0];
        for(int i=0;i<n;i++)
        {
            mx=max(mx,nums[i]);
            mn=min(mn,nums[i]);
        }
        while(mx!=0){
            int rem=mn%mx;
            mn=mx;
            mx=rem;
        }
        return mn;
        
    }
};