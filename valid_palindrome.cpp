class Solution {
public:
    
    char tolower(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    
    
    
    bool isPalindrome(string s) {
        
        string str;
        
        for(int i = 0 ; i < s.size() ; i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
                str.push_back(s[i]);
            }
        }
        
        int start = 0;
        int end = str.size() - 1;
        
        while(start<=end){
            if(tolower(str[start]) != tolower(str[end])){
                return 0;
            }
            else{
                start++;
                end--;
            }
        }
        return 1;
    }
};
