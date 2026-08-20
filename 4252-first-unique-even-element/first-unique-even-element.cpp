#include <vector>
#include <unordered_map>

class Solution {
public:
    int firstUniqueEven(std::vector<int>& nums) {
        std::unordered_map<int, int> count;
        
        // Count how many times each number appears
        for (int x : nums) {
            count[x]++;
        }
        
        // Find the first number in the original array that is even and unique
        for (int x : nums) {
            if (x % 2 == 0 && count[x] == 1) {
                return x;
            }
        }
        
        // Return -1 if no such number exists
        return -1;
    }
};
