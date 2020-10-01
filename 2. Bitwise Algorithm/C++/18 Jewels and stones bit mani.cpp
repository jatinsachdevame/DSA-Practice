//jewels and stones
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        for(int m=0;m<S.length();m++)
        {
            for(int p=0;p<J.length();p++)
            {
                if(!(J[p]^S[m]))
                {
                    count++;
                } 
            }
        }
        return count;
        
    }
};
