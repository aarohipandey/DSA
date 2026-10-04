
        #include <string>
#include <vector>

class Solution {
public:
    std::string intToRoman(int num) {
        // Parallel arrays ordered from largest to smallest value
        const std::vector<int> values = {
            1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
        };
        const std::vector<std::string> symbols = {
            "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
        };
        
        std::string result = "";
        
        // Loop through each value-symbol pair
        for (size_t i = 0; i < values.size(); ++i) {
            // While the current value can fit into num, append it and subtract
            while (num >= values[i]) {
                result += symbols[i];
                num -= values[i];
            }
        }
        
        return result;
    }
};

        
