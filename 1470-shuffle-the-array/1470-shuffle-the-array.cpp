class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) { 
        vector<int> ans;
        int first=0, second=n;
        for (int i=0; i<n; i++,first++,second++){
            ans.push_back(nums[first]);
            ans.push_back(nums[second]);
            
        }
        return ans;
    }
};