class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {vector<int>res;
    int n=nums.size();
    int lb=-1;
    int ub=-1;
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(nums[mid]==target)
        {
            lb=mid;
            h=mid-1;
        }
        else if(nums[mid]>target)
        {
            h=mid-1;
        }
        else
        l=mid+1;
    }
    l=0;
    h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(nums[mid]==target)
        {
            ub=mid;
            l=mid+1;
        }
        else if(nums[mid]>target)
        {
            h=mid-1;
        }
        else
        l=mid+1;
    }
    return{lb,ub};
    }   };