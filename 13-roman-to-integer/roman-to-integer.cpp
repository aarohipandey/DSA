class Solution {
public:
    int romanToInt(string s) {
    int total = 0;
    int n = s.length();
    
    // Inline values helper for fast lookup without map overhead
    auto getValue = [](char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    };

    for (int i = 0; i < n; i++) {
        int current = getValue(s[i]);
        
        // If next character is larger, subtract current value instead of adding
        if (i < n - 1 && current < getValue(s[i + 1])) {
            total -= current;
        } else {
            total += current;
        }
    }
    
    return total;
}
    
};