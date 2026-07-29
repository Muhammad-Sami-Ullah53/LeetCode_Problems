class Solution {
public:

bool possibleSol(vector<int> arr, int n, int k, int mid){
    int stdCount=1;
    int sum=0;
    for(int i=0; i<n; i++){
        if(arr[i]+sum<=mid){
            sum+=arr[i];
        }
        else{
            stdCount++;
            if(arr[i]>mid || stdCount>k){
            return false;
        }
        sum=arr[i];
        }
    }
    return true;
}

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int s=0;
        for(int i=0; i<n;i++){
            sum+=nums[i];
        }
        int e=sum;
        int mid;
        int ans=-1;
        while(s<=e){
            mid=s+(e-s)/2;
if(possibleSol(nums,n,k,mid)){
    ans=mid;
    e=mid-1;
}
else if(!possibleSol(nums,n,k,mid)){
    s=mid+1;
}
        }
return ans;
    }
};