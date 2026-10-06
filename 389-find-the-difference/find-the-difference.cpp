class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0;
        int sum2=0;
        for(char ch:t)
        {
            sum1=sum1+ch;
        }
        for(char ch:s)
        {
            sum2=sum2+ch;
        }
        int num=sum1-sum2;
        char c=(char)num;
    return c;
        

        
    }
};