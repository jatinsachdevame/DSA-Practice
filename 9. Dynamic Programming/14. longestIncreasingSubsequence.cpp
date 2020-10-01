/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : longest increasing subsequence
 */
#include<bits/stdc++.h>
using namespace std;
int lcs(int *x,int n)
{
	if(n==0) return 0;
	if(x[n-1]>=x[n-2]) 
	{
		cout<<x[n-1]<<" ";
		return lcs(x,n-1)+1;	
	}
	else return lcs(x,n-1);
}
int main()
{
	int x[]= { 1,1,1,-1,10, 22, 9, 3, 34, 50, 41, 60 ,8,76};
	int n=sizeof(x)/sizeof(x[0]);
	cout<<"lcs of given array is "<<lcs(x,n);
}
