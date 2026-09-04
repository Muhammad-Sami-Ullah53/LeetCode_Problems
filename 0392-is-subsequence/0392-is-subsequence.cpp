class Solution {
public:
    bool isSubsequence(string s, string t) {
        int size1=s.length();
        int size2=t.length();
        int i=0, j=0;
        int count=0;
        bool value=false;
        if(size1==0)
        return 1;
        while(i<size1 && j<size2){

          if(s[i]==t[j]){
                i++;
                j++;
                count++;
                
            }
            else {
                j++;
                
            }
        }
        return count==size1;
    }
};