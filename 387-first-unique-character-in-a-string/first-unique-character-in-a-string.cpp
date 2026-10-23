class Solution {
public:
    int firstUniqChar(string s) {
        
        int freq[26]={0};
        for(char c:s)
        {

            int index = std::tolower(c) - 'a';
            freq[c-'a']++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i; // Return the 0-indexed position
            }
        }
       

      return -1;  
    }
};