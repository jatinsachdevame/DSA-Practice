class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=0,i=0;
        for(i=0;i<nums.size();i++)
        {
            res=res^nums[i]^i;
        }
        return res^i;
    }
};
