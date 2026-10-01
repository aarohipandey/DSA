class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>set2;
        set<int>st;
        for(int x:nums1)
        {
            st.insert(x);
        }
        for(int x:nums2)
        {
            if(st.count(x))
            set2.insert(x);
        }
        return vector<int>(set2.begin(), set2.end()); 
        
    }};
