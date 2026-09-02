class Solution {
public:
    int lengthOfLastWord(string s) {
        
        string ans;
        int i=s.size()-1;
        while(i>=0){
            while(i>=0 && s[i]==' '){i--;}
            while(i>=0 && s[i]!=' '){ans=ans+s[i];
                             i--;}
            break;
        } 
        return ans.size();
    }
};