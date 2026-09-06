class Solution {
public:
    int thirdMax(vector<int>& nums) {


        long long largest= LLONG_MIN;
        long long second= LLONG_MIN;
        long long  third= LLONG_MIN;

        for(int i=0; i<nums.size(); i++){
           
            if(nums[i]>largest){third=second; second=largest; largest=nums[i];}

            else if(nums[i]<largest && nums[i]>second){third=second; second= nums[i];}

            else if(nums[i]<second && nums[i]>third){third=nums[i];}
        }       
        if(third==LLONG_MIN){return largest;}          
        
        return third;
    }
};