class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int xorResult = 0;

// XOR all indices and array elements
for (int i = 0; i < nums.size(); i++) {
    xorResult ^= i;
    xorResult ^= nums[i];
}

// XOR with n
xorResult ^= nums.size();

// xorResult is the missing number
return xorResult;
    }
};
