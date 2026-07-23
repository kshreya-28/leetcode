class Solution {
public:
    bool hasAlternatingBits(int n) {
        int x= n ^ (n>>1);

        if( x==INT_MAX || (x & (x+1))==0 ){return true;}
        return false;

        
    }
};