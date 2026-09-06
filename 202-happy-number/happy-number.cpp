
        class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visited;
        
        // Loop until n becomes 1 or we detect a cycle
        while (n != 1 && visited.find(n) == visited.end()) {
            visited.insert(n);
            n = getNext(n);
        }
        
        return n == 1;
    }

private:
    // Helper function to calculate the sum of the squares of digits
    int getNext(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }
    
};