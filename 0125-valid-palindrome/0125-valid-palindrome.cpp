class Solution {
public:
char to_lower(char c){
    if(c>='a' && c<='z'){
        return c;
    }
    else {
c=c-'A'+'a';
return c;
    }
    
}
    bool isPalindrome(string str) {
        int n=str.size();
        int s=0;
        int e=n-1;
        while(s<e){
             if (!isalnum(str[s])) {
                s++;
                continue;
            }

            // Skip special characters from right
           else if (!isalnum(str[e])) {
                e--;
                continue;
           }
           else if(to_lower(str[s])!=to_lower(str[e])){
                return 0;
            }
           
           s++;
           e--;
        }
        return 1;
    }
};