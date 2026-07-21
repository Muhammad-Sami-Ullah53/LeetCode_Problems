class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0,e=n-1;
        int m=s+(e-s)/2;
        if (nums[0] <= nums[n - 1])
    return nums[0];
        while(s<e){
            if(nums[m]>=nums[0]){
                s=m+1;
            }
            else{
                e=m;
            }
            m=s+(e-s)/2;
        }
        return nums[s];
    }
};