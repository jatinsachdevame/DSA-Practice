/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : naive sol O(2^n), improved sol O(m*n)
 * Title : longest common subString(naive recursive) 
 */

#include <bits/stdc++.h> 
using namespace std; 
int max(int a, int b,int c) 
{
	return max(max(a,b),c);
}
int lcs( char *X, char *Y, int m, int n, int count ) 
{ 	
	if(m==0||n==0)
	return count;
	else if(X[m-1]==Y[n-1])
	return lcs(X,Y,m-1,n-1,count+1);
	else
	{
		return max(count,lcs(X,Y,m-1,n,0),lcs(X,Y,m,n-1,0));
	}
	return count;
} 
int max(int a, int b) 
{ 
	return (a > b)? a : b; 
} 
int main() 
{ 
	char X[] = "GEEKSatma"; 
	char Y[] = "GEETAatmaj"; 
	int m = strlen(X); 
	int n = strlen(Y); 
	int count=0;
	cout<<"Length of LCS is "<< lcs( X, Y, m, n, count ) ; 	
	return 0; 
}
