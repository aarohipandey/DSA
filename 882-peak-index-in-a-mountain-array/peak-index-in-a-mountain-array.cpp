class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            int peak=i+(j-i) /2;
            if(arr[peak]<arr[peak+1])
            {
                i=peak+1;
            }
            else
                j=peak;
        
        }return i;
        
    }
};