class Solution {
public:
    int maxProduct(int n) {int num=n; int max1=0;int max2=0;
    while(num>0){
        int d=num%10;
        num/=10;
        if(d>max1){
            max2=max1;
            max1=d;
        }
        else if(d>max2)
        {
            max2=d;
        }
    }
    return max1*max2;
        
    }
};