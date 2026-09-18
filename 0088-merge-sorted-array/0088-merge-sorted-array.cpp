class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v;
        int i=0;
        int j=0;

        while(m>0){
            v.push_back(nums1[i]);
            i++;
            m--;}

        while(n>0){    
            v.push_back(nums2[j]);
            j++;
            n--;
        }
        
        sort(v.begin(), v.end());
        nums1=v;
    }
};