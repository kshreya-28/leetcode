
class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> m1;
        unordered_map<string, char> m2;

        int i = 0;
        int j = 0;

        while (i < pattern.size() && j < s.size()) {

            string word = "";

            while (j < s.size() && s[j] != ' ') {
                word = word + s[j];
                j++;
            }

            j++;

            if (m1.find(pattern[i]) != m1.end()) {
                if (m1[pattern[i]] != word) {
                    return false;
                }
            }

            if (m2.find(word) != m2.end()) {
                if (m2[word] != pattern[i]) {
                    return false;
                }
            }

            m1[pattern[i]] = word;
            m2[word] = pattern[i];

            i++;
        }

        if (i == pattern.size() && j >= s.size()) {
            return true;
        }

        return false;
    }
};

