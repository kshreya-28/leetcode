class Solution {
public:
    string minWindow(string s, string t) {

        vector<int> hash(256, 0);

        for (char c : t) {
            hash[c]++;
        }

        int l = 0;
        int r = 0;
        int cnt = 0;
        int minLen = INT_MAX;
        int startIndex = -1;

        while (r < s.size()) {

            if (hash[s[r]] > 0) {
                cnt++;
            }

            hash[s[r]]--;

            while (cnt == t.size()) {

                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    startIndex = l;
                }

                hash[s[l]]++;

                if (hash[s[l]] > 0) {
                    cnt--;
                }

                l++;
            }

            r++;
        }

        if (startIndex == -1)
            return "";

        return s.substr(startIndex, minLen);
    }
};