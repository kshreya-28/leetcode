class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {


        int carry=1;
        for (int i= digits.size()-1; i>=0; i--){
            int sum=0;
            sum=digits[i]+carry;
            carry=sum/10;
            sum=sum%10;
            digits[i]=sum;

        }
        if(carry==1){digits.insert(digits.begin(),1);}
        return digits;
        
    }
};