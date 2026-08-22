class Solution {
public:
    bool checkDivisibility(int n) {int sum=0;int num=n;int product=1;
        while(num>0){
            int d=num%10;
            sum=sum+d;
            product=product*d;
            num=num/10;
        }

        if(n%(sum+product)==0)
        return true;
        else
        return false;


        
    }
};