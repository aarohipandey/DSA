class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int nr=accounts.size();
        int nc=accounts[0].size();
        int maxsum=0;
        for(int i=0;i<nr;i++)
        {   int sum=0;
            for(int j=0;j<nc;j++)
            {
                sum+=accounts[i][j];
            }
            maxsum=max(maxsum,sum);
        }
     return maxsum;   
    }
};