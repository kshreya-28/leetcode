class Solution {
public:
       int atmost(vector<int>& nums, int k){
              int l=0;
              int r=0;
              int sum=0;
              int cnt=0;
              if(k<0){return 0;}

              while(r<nums.size()){if(nums[r]%2==1){sum=sum+1;}
                                   while(sum>k){if(nums[l]%2==1){sum=sum-1;}
                                               l++;}
                                   cnt=cnt+ r-l+1;
                                   r++;
                             }
                             return cnt;}
        



    int numberOfSubarrays(vector<int>& nums, int k) {

              return atmost(nums,k)- atmost(nums,k-1);
    }
};