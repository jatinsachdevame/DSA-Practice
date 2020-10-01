/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(logn)
 * title :  Power of 4
 */
class Solution {
public:
    bool isPowerOfFour(int num) {
        
        if(num==1) return true;
        if(num<4) return false;
        int rem=num%4;
        if(rem!=0) 
        {
         return false;
        }
        return isPowerOfFour(num>>2);
        

    }
};
