class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low <= high){
            int mid = (low + high)/2;

            if(nums[mid] == target) return true;

            if(nums[mid]==nums[low] && nums[mid]==nums[high]){low++;high--;}

            

            // Left half sorted
            else if(nums[low] <= nums[mid]){
                if(target >= nums[low] && target <= nums[mid]){
                    high = mid-1; // go left
                } else {
                    low = mid+1;  // go right
                }
            }
            // Right half sorted
            else{
                if(target >= nums[mid] && target <= nums[high]){
                    low = mid+1; // go right
                } else {
                    high = mid-1; // go left
                }
            }
        }
        return false;
    }
};
