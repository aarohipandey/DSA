class Solution {
    public int[] runningSum(int[] nums) {
        int[] prefixSum=new int[nums.length];
        prefixSum[0]=nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.length;i++)
        {
            sum+=nums[i];
            prefixSum[i]=sum;
        }
        return prefixSum;
    }
}