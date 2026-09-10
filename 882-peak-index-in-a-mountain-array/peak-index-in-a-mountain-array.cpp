class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
         if(arr[i]<arr[i+1])
         {
            i++;
         }
         if(arr[j]<arr[j-1])
         {
            j--;
         }
         if(i==j)
         {
            return i;
         } 
        
        }return i;
        
    }
};