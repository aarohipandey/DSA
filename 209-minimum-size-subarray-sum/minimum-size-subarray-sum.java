class Solution {
    public int minSubArrayLen(int target, int[] nums) {
     int start=0;
     int min=Integer.MAX_VALUE;
     int windowsum=0;
     for(int end=0;end<nums.length;end++)
     {
        windowsum+=nums[end];
        while(windowsum>=target)
        {
            min=Math.min(min,end-start+1);
            windowsum-=nums[start];
            start+=1;
        }
     }
     return min==Integer.MAX_VALUE?0:min;
   
    }
}