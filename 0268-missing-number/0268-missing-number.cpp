class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
      
        int xor1=0;
        for(int i=0;i<=n;i++){xor1=xor1^i;}
        
        int xor2=0;
        for(int j=0;j<=n-1;j++){xor2=xor2^nums[j];}
        
        return xor1^xor2;
        
    }
};
