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
int max(int a, int b)
{
	return a>b?a:b;
}
int lcs(int *x,int n)
{
	int i;
	int table[n+1];
	for(i=0;i<=n;i++)
	{
	if(i==0) table[i]=0;
	if(x[i-1]>=x[i-2]) table[i]=table[i-1]+1;
	else table[i]=table[i-1];
	}
	//for printint LIS
	int index=table[n];
	int arr[n];
	for(int i=0;i<n;i++)
	{
		if(table[i]<table[i+1])
		cout<<x[i]<<" ";
	}
	return table[n];
}
int main()
{
	int x[]= { 1,1,1,-1,10, 22, 9, 3, 34, 50, 41, 60 ,8,76};
	int n=sizeof(x)/sizeof(x[0]);
	cout<<"lcs of given array is "<<lcs(x,n);
}
