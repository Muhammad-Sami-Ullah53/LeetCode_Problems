class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1;
        int mid=s+(e-s)/2;
        int ans=0;
        while(s<=e){
if(nums[mid]==target){
    ans=mid;
    break;
}
else if(nums[mid]<target){
s=mid+1;
ans=mid+1;
}
else if(nums[mid]>target){
    e=mid-1;
}
mid=s+(e-s)/2;
        }
        return ans;
    }
};