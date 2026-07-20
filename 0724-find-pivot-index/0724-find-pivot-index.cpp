class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls=0;
        int sum=0;
        int rs=0;
        int ans=-1;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        
     for (int i = 0; i < nums.size(); i++) {
    rs = sum - ls - nums[i];

    if (ls == rs) {
        return i;
    }

    ls += nums[i];
}

return -1;
    }
    
};
