/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(logn)
 * title :  power of 3
 */
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        if(n<3) return false;
        int rem=n%3;
        if(rem!=0) 
        {
         return false;
        }
        return isPowerOfThree(n/3);
              
    }
};
