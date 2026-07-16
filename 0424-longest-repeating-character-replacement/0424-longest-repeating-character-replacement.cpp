class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int maxlen=0;
        int len=0;
        int changes=0;
        int maxf=0;
        vector<int> hash(26,0);
        while(r<s.size()){
            hash[s[r]-'A']++;
            maxf=max(maxf,hash[s[r]-'A']);
            len=r-l+1;
            changes=len-maxf;

            while(changes>k){hash[s[l]-'A']--;
                l++;
                len=r-l+1;
                changes=len-maxf;}
            
            maxlen=max(maxlen,len);
            r++;
        }
        return maxlen;
    }
};