
        class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> res;
       if(numRows==0)
       return res;
       vector <int> row;
        row.push_back(1);
        res.push_back(row);
       for(int i=1;i<numRows;i++)
       {
        row.push_back(1);
         for(int j=1;j<i;j++)
         {
            
            row[j]=res[i-1][j]+res[i-1][j-1];
        
         }
         res.push_back(row);
       } 
       return res;
        
    }
};
        
   