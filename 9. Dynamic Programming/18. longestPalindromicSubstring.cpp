#include <bits/stdc++.h> 
using namespace std; 
int max(int x, int y) 
{ 
	return (x > y) ? x : y; 
} 
int lps(string s, int i, int j, int count)
{
	if(i>j) return count;
	else if(i==j) return count+1;
	else if (s[i]==s[j])
	{
		count=lps(s,i+1,j-1,count+2);
		return max(count,max(lps(s,i+1,j,0),lps(s,i,j-1,0)));
	}
	else
	return max(lps(s,i+1,j,0),lps(s,i,j-1,0));
} 
int main() 
{ 
	string str = "aaaabbaa";
	int n=str.length(); 
	int count=lps(str,0,n,0); 
	cout<<count<<endl;
} 
