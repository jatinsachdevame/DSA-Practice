//number of steps to reduce zero, if even divide if odd minus 1
class Solution {
public:
    int numberOfSteps (int num) {
        int count =0;
        while(num>0)
        {
            if(!(num&1))
            {
                num=num>>1;
                count++;
            }
            else
            {
                num--;
                count++;
            }
        }
        return count;
    }
};
