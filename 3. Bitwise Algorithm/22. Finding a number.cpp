class Solution {
public:
    char findTheDifference(string s, string t) {
	
	int res=0;
	for(int i=0;i<s.length();i++)
		res^=s[i];
	for(int j=0;j<t.length();j++)
		res^=t[j];
		return char(res); 
    }
};
