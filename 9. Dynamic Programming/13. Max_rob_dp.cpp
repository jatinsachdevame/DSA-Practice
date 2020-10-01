/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  maximum robbery problem/ dynamic programming/ memoization
 */
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return NULL; //for empty list, its important to return NULL
        if(n==1) return nums[0]; //for single element return that element
        if(n==2) //return max of two element
        {
            int t=nums[0]>nums[1] ? nums[0]:nums[1];
            return t;
        }
        // element greater than 2
        vector<int> temp;
        int max=nums[0]>nums[1]? nums[0]:nums[1];
        temp.push_back(nums[0]);
        temp.push_back(max);
        for(int i=2;i<n;i++)
        {
            if((nums[i]+temp[i-2])>max)
            {
                max=nums[i]+temp[i-2];
            }
            temp.push_back(max);
        }
        return max;
    }
};
