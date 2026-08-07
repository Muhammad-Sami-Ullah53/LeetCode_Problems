class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=0;
        int size=heights.size();
        bool swaped=false;
        vector<int> arr=heights;
        for(int i=0; i<size-1; i++){
            for(int j=0; j<size-i-1; j++){
                if(heights[j]>heights[j+1]){
                    swap(heights[j],heights[j+1]);
                    swaped=true;
                   
                }
            }
            if(!swaped)
            break;
            
        }
      for(int i=0; i<arr.size(); i++){
        if(arr[i]!=heights[i])
        n++;
      }
      return n;
    }
  
};