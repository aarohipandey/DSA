class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        /*long c=0;
        int n=time.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((time[i]+time[j])%60==0)
                {
                    c++;
                }
            }
        }
        return c*/

        vector<int> rem(60, 0);
        int count = 0;

        for (int t : time) {
            int r = t % 60;
            int need = (60 - r) % 60;

            count += rem[need];
            rem[r]++;
        }

        return count;
    }
};
        
        
