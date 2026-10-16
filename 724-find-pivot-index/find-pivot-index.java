class Solution {
    public int pivotIndex(int[] nums) {
        int totalSum = 0;
        int leftSum = 0;
        
        // Step 1: Calculate the total sum of the array
        for (int num : nums) {
            totalSum += num;
        }
        
        // Step 2: Iterate through the array and check for the pivot
        for (int i = 0; i < nums.length; i++) {
            // The right sum is the remaining part of totalSum
            int rightSum = totalSum - leftSum - nums[i];
            
            // If left sum equals right sum, we found the leftmost pivot index
            if (leftSum == rightSum) {
                return i;
            }
            
            // Add current number to leftSum for the next iteration
            leftSum += nums[i];
        }
        
        // Return -1 if no pivot index exists
        return -1;
    }
}

