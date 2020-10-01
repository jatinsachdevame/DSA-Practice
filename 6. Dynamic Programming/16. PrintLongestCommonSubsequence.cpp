/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n^2)
 * Title : print longest common subsequence 
 */

#include <bits/stdc++.h> 
using namespace std; 
int max(int a, int b,int c) 
{
	return max(max(a,b),c);
}
int lcs( char *X, char *Y, int m, int n, int count ) 
{ 	
	int table[m+1][n+1];
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0||j==0)
			table[i][j]=0;
			else if(X[i-1]==Y[j-1])
			table[i][j]=table[i-1][j-1]+1;
			else table[i][j]=max(table[i-1][j],table[i][j-1]);
		}
	}
	int index=table[m][n];  
	char lcs[index+1]; 
	lcs[index] = '\0'; 
	i = m, j = n; 
	while (i > 0 && j > 0) 
	{ 
		if (X[i-1] == Y[j-1]) 
		{ 
			lcs[index-1] = X[i-1]; // Put current character in result 
			i--; j--; index--;	 // reduce values of i, j and index 
		} 

		else if (table[i-1][j] > table[i][j-1]) 
			i--; 
		else
			j--; 
	} 
	cout << "LCS of " << X << " and " << Y << " is " << lcs;
	return table[m][n]; 
} 
int main() 
{ 
	char X[] = "geetaatma"; 
	char Y[] = "geetafgatmaj"; 
	int m = strlen(X); 
	int n = strlen(Y); 
	int count=0;
	cout<<"Length of LCS is "<< lcs( X, Y, m, n, count ) ; 	
	return 0; 
}
