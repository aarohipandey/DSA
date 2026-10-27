/*class Solution {
 public int totalFruit(int[] fruits){
        int start=0;
        Map <Integer,Integer>FreqMap =new HashMap<>();
        int maxlength=0;
        for(int end =0;end<fruits.length;end++)
        {
            int curr=fruits[end];
            FreqMap.put(curr,FreqMap.getDefault(curr,0)+1);
            if(FreqMap.size()>2)
            {
                int left=fruits[start];
            
            FreqMap.put(left,FreqMap.get(left)-1);
            if(FreqMap.get(left)==0)
            {
                FreqMap.remove(left);
            }
            start+=1;
        }
        maxlength=Math.max(maxlength,end-start+1);
        }
        return maxlength;


        
    }
};*/
class Solution {
 public int totalFruit(int[] fruits){
int start=0;
        Map < Integer,Integer>FreqMap = new HashMap<>();
        int maxlength=0;
        for(int end=0;end<fruits.length;end++)
        {
            int curr=fruits[end];
            FreqMap.put(curr,FreqMap.getOrDefault(curr,0)+1);
            while(FreqMap.size()>2)
            {
                int left=fruits[start];
            
            FreqMap.put(left,FreqMap.get(left)-1);
            if(FreqMap.get(left)==0)
            {
                FreqMap.remove(left);
            }
            start+=1;
        }
        maxlength=Math.max(maxlength,end-start+1);}
        return maxlength;
 }
};
        