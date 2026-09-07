class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n= nums.size();
        
        int d=0;
        for(int i=0;i<n;i++)
        {   int temp=nums[i];
        int c=0;
            while(temp>0)
            {
                c++;
                temp=temp/10;
            }
            if(c%2==0)
            {
                d++;
            }
        }
       return d; 
    }
};