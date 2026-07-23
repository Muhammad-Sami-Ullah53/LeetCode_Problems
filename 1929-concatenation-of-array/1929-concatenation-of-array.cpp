class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n1=nums.size();
        
        vector<int> ans;
        for(int i=0; i<(n1+n1); i++){
            if(i<n1){
                ans.push_back(nums[i]);
            }
            else{
                ans.push_back(nums[i-n1]);
            }
        }
        return ans;
    }
};