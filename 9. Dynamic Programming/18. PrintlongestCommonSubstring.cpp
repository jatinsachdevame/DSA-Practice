/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(N^2)
 * Title : longest common subString
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
	int result=0;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0||j==0)
			table[i][j]=0;
			else if(X[i-1]==Y[j-1])
			{
				table[i][j]=table[i-1][j-1]+1;
				result=max(result,table[i][j]);
			}
			else
			{
				table[i][j]=0;
			}
		}
	}
	int index=result;
	i=m;j=n;
	char arr[index+1];
	arr[result]='\0';
	while(i>0&&j>0)
	{
		if(X[i-1]==Y[j-1])
		{
			arr[index-1]=X[i-1];
			i--;j--;index--;
		}
		else if(table[i-1][j]>table[i][j-1])
		{
			arr[index-1]=X[i-1];
			i--;
		}
		else
		{
			arr[index-1]=Y[j-1];
			j--;
		}
	}
	cout<<arr;
	return result;
} 
int max(int a, int b) 
{ 
	return (a > b)? a : b; 
} 
int main() 
{ 
	char X[] = "eekatma"; 
	char Y[] = "GEETAatmaj"; 
	int m = strlen(X); 
	int n = strlen(Y); 
	int count=0;
	cout<<"Length of LCS is "<< lcs( X, Y, m, n, count ) ; 	
	return 0; 
}
