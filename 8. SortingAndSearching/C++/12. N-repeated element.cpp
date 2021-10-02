/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : repeatedNTimes 
 */
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int> m;
        for(int i=0;i<A.size();i++)
        {
            m[A[i]]++;
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>=A.size()/2) return it->first;
        }
        return 0;
    }
};
