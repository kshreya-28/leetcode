class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;

        // Check if n is a power of 2
        if ((n & (n - 1)) != 0) return false;

        // The only set bit must be at an even position
        return (n & 0x55555555) != 0;
    }
};