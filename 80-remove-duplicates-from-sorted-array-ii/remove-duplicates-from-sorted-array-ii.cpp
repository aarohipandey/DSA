class Solution {
    public:
    int removeDuplicates(vector<int>&nums) {
        int c=0;
        unordered_map<int,int>freqmp;
        for(int i:nums)  
        {
            if(freqmp[i]<2)
            {
                nums[c]=i;
                c++;
        
            freqmp[i]++;
        }
        }
        
        return c;
        
    }
};