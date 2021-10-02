//compliment of a number
class Solution {
public:
    int findComplement(int num) {
    int i=0;
	while(i<num)
	{
		i=(i<<1)|1;
	}
	return i-num;
    }
};
