#include <vector>
#include <iostream>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int totalLength = m + n;
        int targetIdx = totalLength / 2;

        int i = 0, j = 0;
        int curr = 0, prev = 0;

        // Iterate up to the middle element index
        for (int count = 0; count <= targetIdx; count++) {
            prev = curr; // Save the last element before updating

            if (i < m && (j >= n || nums1[i] < nums2[j])) {
                curr = nums1[i];
                i++;
            } else {
                curr = nums2[j];
                j++;
            }
        }

        // If odd, the current element is exactly the median
        if (totalLength % 2 != 0) {
            return curr;
        } 
        // If even, return the average of the last two tracked values
        else {
            return (prev + curr) / 2.0;
        }
    }
};
