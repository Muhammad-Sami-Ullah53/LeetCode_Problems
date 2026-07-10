class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            int elem=nums1[i];
            bool present=false;
              for(int k=0;k<ans.size();k++){
                 if(elem==ans[k]){
                     present=true;
                    }
    
                }
           if(present) continue;
            for(int j=0; j<nums2.size(); j++){
                if(elem==nums2[j]){
                  ans.push_back(elem);
                  nums2[j]=-1;
                  break;
                }
            }
        }
        return ans;
    }
};