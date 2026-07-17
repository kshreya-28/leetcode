class Solution {
public:
    int atmost(vector<int>& nums, int k){
        if(k<0){return 0;}
        int l=0;
        int r=0;
        unordered_map<int,int>m;
        int cnt=0;
        while(r<nums.size()){
            m[nums[r]]++;
            while(m.size()>k){m[nums[l]]--;
                              if(m[nums[l]]==0){m.erase(nums[l]);}
                              l++;
                              }
            cnt=cnt+ r-l+1;
            r++;                
        }
         return cnt;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};