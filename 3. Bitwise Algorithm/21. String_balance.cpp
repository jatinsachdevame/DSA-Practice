class Solution {
public:
    int balancedStringSplit(string s) {
        int sum=0;
	    int count=0;
	for(int i=0;i<s.length();i++)
	{
		
		s[i]^'L'?count++:count--;
        if(count==0)
        sum++;
		
	}
	return sum;
     
    }
};
