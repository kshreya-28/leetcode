class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        
        int rev=0;
        while(x>rev){
            int digit=x%10;
            rev=rev*10+digit;

            x=x/10;
        }
        if(rev/10==x||rev==x){return true;}

        return false;




    }
};