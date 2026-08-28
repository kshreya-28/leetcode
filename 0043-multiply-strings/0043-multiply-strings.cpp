#include <string>
#include <algorithm>

class Solution {
public:
    std::string multiply(std::string num1, std::string num2) {
        // Handle edge cases where either number is "0"
        if (num1 == "0" || num2 == "0") return "0";
        
        int m = num1.length();
        int n = num2.length();
        
        // Result string initialized with zeros, max length is m + n
        std::string res(m + n, '0');
        
        // Multiply each digit from right to left
        for (int i = m - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                int mult = (num1[i] - '0') * (num2[j] - '0');
                int sum = mult + (res[i + j + 1] - '0'); // Add to existing value at position
                
                res[i + j + 1] = (sum % 10) + '0';       // Store current digit
                res[i + j] += sum / 10;                  // Carry over to the left position
            }
        }
        
        // Find the first non-zero character to strip leading zeros
        size_t startpos = res.find_first_not_of('0');
        if (startpos != std::string::npos) {
            return res.substr(startpos);
        }
        
        return "0";
    }
};