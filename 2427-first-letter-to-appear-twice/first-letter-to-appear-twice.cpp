class Solution {
    public:
     char repeatedCharacter(string s) {
        set<char>set;
        for(char c:s)
        {
            if(set.count(c))
            {
                return c;

            }
            set.insert(c);
        }
    return ' ';
        
    }
};