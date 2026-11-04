
        class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {

        long long sum = 0;

        for(int x : nums)
            sum += x;

        int target = sum % p;

        if(target == 0)
            return 0;

        unordered_map<int,int> mp;

        mp[0] = -1;

        long long prefix = 0;
        int ans = nums.size();

        for(int i = 0; i < nums.size(); i++) {

            prefix += nums[i];

            int rem = prefix % p;

            int need = (rem - target + p) % p;

            if(mp.find(need) != mp.end()) {
                ans = min(ans, i - mp[need]);
            }

            mp[rem] = i;
        }

        return ans == nums.size() ? -1 : ans;
    }
};
        