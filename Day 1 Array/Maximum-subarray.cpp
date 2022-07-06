class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()-1 == 0 ) return nums[0];
        int maxi = nums[0];
        int sum = 0;
        for(int i = 0; i<nums.size();i++)
        {
            sum += nums[i];
            if(maxi < sum)
                maxi = sum;
            if(sum<0) sum = 0;
            
        }
        return maxi;
    }
};