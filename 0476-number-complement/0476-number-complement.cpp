class Solution {
public:
    int findComplement(int num) {
        //calculating size
       int n=num;
       int cnt=0;
       while(n!=0){
        n=n>>1;
        cnt++;
       }

       //creating mask of size cnt
       int mask=1;
       while(cnt>1){
        mask=mask<<1|1;
        cnt--;
       }
       return mask^num;

        
    }
};