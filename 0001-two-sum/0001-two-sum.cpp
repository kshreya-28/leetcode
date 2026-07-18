class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int n=nums.size();
         int r=n-1;
         unordered_map<int,int>m;

         for(int i=0;i<n;i++){
            int complement= target-nums[i];
            if(m.find(complement)!=m.end()){return {i,m[complement]};}
            else{m[nums[i]]=i;}
         }
         return {};
    }
};