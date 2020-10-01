/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(1)
 * title :  check whether the alternating bits are diffrent/leetcode/important/lc693
 */

class Solution {
public:
    bool hasAlternatingBits(int n) {
        n^=n>>2;
        return !(n & (n - 1)); //important question 
    }
};
/*
101010
001010
100000
011111
000000~0
1

