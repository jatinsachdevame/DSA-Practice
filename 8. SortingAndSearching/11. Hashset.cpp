/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : unique occurence 
 */
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        set<int> s;
        set<int>::iterator it;
        
        for(auto i=m.begin();i!=m.end();i++)
        {
            it=s.find(i->second);
            if(it!=s.end()) return false;
            else s.insert(i->second);
        }
        return true;
        
        
        /*
        also,
       	 
        for(auto i=m.begin();i!=m.end();i++)
        {
             s.insert(i->second);
        }
        return (m.size()==s.size());
        */
        
    }
};
