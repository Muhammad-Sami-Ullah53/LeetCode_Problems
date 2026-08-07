class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=0;
        int size=heights.size();
        vector<int> arr=heights;
        for(int i=1; i<size; i++){
            for(int j=0; j<size-i; j++){
                if(heights[j]>heights[j+1]){
                    swap(heights[j],heights[j+1]);
                   
                }
            }
            
        }
      for(int i=0; i<arr.size(); i++){
        if(arr[i]!=heights[i])
        n++;
      }
      return n;
    }
  
};