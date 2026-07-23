class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=0;
        for(int i=0;i<s.size();i++){
            ans=ans^s[i];
        }
        for(int j=0; j<t.size();j++){
            ans=ans^t[j];
        }
        return ans;
    }
};