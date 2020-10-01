/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : naive sol O(2^n), improved sol O(m*n)
 * Title : longest common subString with vowels(naive recursive) 
 */

#include <bits/stdc++.h> 
using namespace std; 
int max(int a, int b,int c) 
{
	return max(max(a,b),c);
}
int lcs( char *X, int m, int count ) 
{ 	
	if(m==0)
	return count;
	else if(X[m-1]=='a'||X[m-1]=='e'||X[m-1]=='i'||X[m-1]=='o'||X[m-1]=='u')
	return lcs(X,m-1,count+1);
	else
	{
		return max(count,lcs(X,m-1,0));
	}
	return count;
} 
int max(int a, int b) 
{ 
	return (a > b)? a : b; 
} 
int main() 
{ 
	char X[] = "geeksatma"; 
	int m = strlen(X); 
	int count=0;
	cout<<"Length of LCS is "<< lcs( X, m, count ) ; 	
	return 0; 
}
