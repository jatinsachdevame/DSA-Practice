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
int lcs( char *X,int m, int i, int count ) 
{ 	
	if(m==0)
	return count;
	if(i==m)
	return count+1;
	else if(X[m-1]==X[i])
	{
		return lcs(X,m-1,i+1,count+2);
	}
	else
	{
		return max(count,lcs(X,m-1,i,0),lcs(X,m,i+1,0));	
	}
	return count;
} 
int max(int a, int b) 
{ 
	return (a > b)? a : b; 
} 
int main() 
{ 
	char X[] = "asmomdata";  
	int m = strlen(X); 
	int count=0;
	cout<<"Length of LPS is "<< lcs( X,m,0,count); 	
	return 0; 
}
