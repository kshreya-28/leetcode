class Solution {
public:
    int minBitFlips(int start, int goal) {

        int ans= start^goal;
        //cnt no of set bits in ans
        int cnt=0;
        while(ans!=0){
            ans=ans&(ans-1);
            cnt++;
        }
        return cnt;
    }
};