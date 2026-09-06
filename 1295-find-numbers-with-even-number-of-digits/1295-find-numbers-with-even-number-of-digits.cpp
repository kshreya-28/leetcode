class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int n=0;
            while(nums[i]>0){n=n+1;
                       nums[i]=nums[i]/10;}
            if(n%2==0){cnt++;}
        }
        return cnt;
    }
};