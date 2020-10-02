/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(2^n)
 * Title : subset sum
 */
#include<bits/stdc++.h>
using namespace std;
bool subset(int arr[],int n,int w)
{
	bool static table[100][100];
	memset(table,-1,sizeof(table));
	if(table[n][w]!=-1) return table[n][w];
	//memoize approach
	if(n==0) return table[n][w]=0;
	if(w==0)return table[n][w]=1;
	else if(arr[n-1]<=w)
	return table[n][w]=subset(arr,n-1,w-arr[n-1])||subset(arr,n-1,w);
	else if(arr[n-1]>w)
	return table[n][w]=subset(arr,n-1,w);
	return table[n][w];
}
int main()
{
	int arr[]={2,3,5,8,34};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=11;
	if(subset(arr,n,sum))
	cout<<"true";
	else cout<<"false";
}
