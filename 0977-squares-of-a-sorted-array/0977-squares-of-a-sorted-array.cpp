class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n=nums.size();
        int min=0;

        for(int i=0; i<n; i++){
nums[i]=nums[i]*nums[i];
        }

        for(int i=0; i<n-1; i++){
            min=i;
for(int j=i+1; j<n; j++){
if(nums[min]>nums[j]){
    min=j;
}
}
swap(nums[min],nums[i]);

        }
        return nums;
    }
};