class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> value = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};
        int ans=0;
        int i=0;
        int n=s.size();
        while(i<n){
            if(i+1<n && value[s[i]]< value[s[i+1]]){ans=ans+value[s[i+1]]-value[s[i]];
                            i++;}
            else {ans=ans+value[s[i]];}
            i++;
        }
        return ans;
    }
};