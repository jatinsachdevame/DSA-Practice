/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : m*n
 * Title : A Dynamic Programming based C++ program to find minimum number operations to convert str1 to str2 
 */
#include <bits/stdc++.h> 
using namespace std; 
int min(int x, int y, int z) 
{ 
	return min(min(x, y), z); 
} 

int editDistDP(string str1, string str2, int m, int n) 
{ 
	int dp[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0)
			dp[i][j]=j;
			if(j==0)
			dp[i][j]=i;
			if(str1[i-1]==str2[j-1])
			dp[i][j]=dp[i-1][j-1];
			else
			dp[i][j]=1+min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
		}
	}
	return dp[m][n]; 
} 

int main() 
{ 
	 
	string str1 = "sunday"; 
	string str2 = "saturday"; 
	cout << editDistDP(str1, str2, str1.length(), str2.length()); 
	return 0; 
} 

