class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> m(256,-1);
        int r=0;
        int l=0;
        int maxlen=0;
        int len=0;
        while(r<s.size()){
            if(m[s[r]]!=-1){
                if(m[s[r]]>=l){l=m[s[r]]+1;}}

            m[s[r]]=r;
            len=r-l+1;
             maxlen=max(len,maxlen);
             r++;

        }
        return maxlen;
    }
};