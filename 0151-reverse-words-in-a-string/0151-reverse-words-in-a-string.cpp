class Solution {
public:
    string reverseWords(string s) {
        string fans;
        int i=s.size()-1; 
        while(i>=0){
            string ans;
            while( i>=0  && s[i]==' ' ){i--;}
            while( i>=0 && s[i]!=' ' ){ans=ans+s[i]; i--;}
            reverse(ans.begin(), ans.end());
            fans= fans+ ans + ' ';

        }
        int j=fans.size()-1;
        while(fans[j]==' '){fans.pop_back(); j--;}
        return fans;

    }
};