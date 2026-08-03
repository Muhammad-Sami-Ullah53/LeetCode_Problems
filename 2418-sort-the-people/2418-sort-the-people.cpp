class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int min;
        int n=heights.size();
        for(int i=0; i<n-1; i++){
          min=i;
            for(int j=i; j<n; j++){
                if(heights[j]>heights[min]){
                    min=j;
                   
                }    
                
            }
            swap(names[i],names[min]);
            swap(heights[i],heights[min]);

        }
        return names;
    }
};