class Solution {
public:
    int reverseBits(int n) {

        int ans=0;
        for(int i=31; i>=0; i--){
               if( (n & 1) ==1){ans= ans+ (1<<i);}
               n=n>>1;
        }
        return ans;
    }
};