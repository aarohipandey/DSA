class Solution {
public:
    int maxArea(vector<int>& height) {
    int n=height.size();
    int i=0;
    int j=n-1;int max_water=0;
        while(i<j)
        {
            int width=j-i;
            int heights = min(height[i],height[j]);
            int cur_water=width*heights;
            max_water=max(max_water,cur_water);
            if(height[i]<height[j])
                i++;
            else
            j--;
        }
        
        return max_water;}
        
    
};