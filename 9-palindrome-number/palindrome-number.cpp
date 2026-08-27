class Solution {
public:
    bool isPalindrome(int x) {long rev=0;int d=0;
    int num=x;
    while(num!=0&&num>0)
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    if(rev==x)
    return true;
    else
    return false;
        
    }
};