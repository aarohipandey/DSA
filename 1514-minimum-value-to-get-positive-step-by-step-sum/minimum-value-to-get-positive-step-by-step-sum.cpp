class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        for(int p=1;p<=10001;p++)
        {   int x=p;
            bool flag=true;
        for(int i=0;i<n;i++)
        {   x=x+nums[i];
            if(x<1){
                flag=false;
                break;
            }
        }
        if(flag==true)
        return p;
        }
        return 1;

        
    }
};