/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n^2)
 * Title :  countCharacters
 */

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> m;
        int sum=0;
        
        for(int i=0;i<chars.size();i++)
        m[chars[i]]++;
        for(int i=0;i<words.size();i++)
        {
            int flag=0;
        unordered_map<char,int> t=m;

            for(int j=0;j<words[i].size();j++)
            {
                if(t[words[i][j]]<1) 
                {
                    flag=1;
                    break;
                }
                else
                {
                    t[words[i][j]]--;
                }
        
            }
            if(flag!=1) sum=sum+words[i].size();
        }
        return sum;
    }
};
