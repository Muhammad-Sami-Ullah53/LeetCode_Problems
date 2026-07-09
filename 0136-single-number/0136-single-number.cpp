class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single=0;
        int size=nums.size();
        for(int i=0; i<size; i++){
            single = single^nums[i];
        }
        return single;
    }
};