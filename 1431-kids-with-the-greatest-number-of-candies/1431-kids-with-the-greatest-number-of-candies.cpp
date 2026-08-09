class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
       vector<bool> ans(n, false);  
        int max=0;

        // to find maximum
        for(int i=0; i<n; i++){
            if(candies[i]>=max){
                max=candies[i];
            }
        }

        // to make ans array
        for(int i=0; i<n; i++){
            if((candies[i]+extraCandies)>=max){
                ans[i]=true;
            }
            else{
                ans[i]=false;
            }
        }
        return ans;
    }
};