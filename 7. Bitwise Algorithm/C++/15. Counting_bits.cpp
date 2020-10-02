//counting bit
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res(num+1,0);
        for(int i=1;i<=num;i++)
        {
            res[i]=res[i/2]+(i&1);
        }
        return res;  
    }
};
