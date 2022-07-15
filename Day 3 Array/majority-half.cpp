class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int ele = 0;
        for(auto i : nums)
        {
            if(count == 0)
            {
                ele = i;
            }
            if(i == ele) count++;
            else count--;           
        }
        return ele;
    }
};