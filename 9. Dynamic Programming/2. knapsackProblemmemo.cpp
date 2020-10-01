/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(2^n)
 * Title : knapsack problem
 */
//problem statement : given two arrays value array and weight array, size of two array and capacity,
// find out the max profit
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int profit(int arr[],int wt[],int n,int w)
{
	int static table[100][100];
	memset(table,-1,sizeof(table));
	if(table[n][w]!=-1) return table[n][w];
	if(n==0||w==0) return 0;
	else if(wt[n-1]<=w)
	return table[n][w]=max(profit(arr,wt,n-1,w-wt[n-1])+arr[n-1],profit(arr,wt,n-1,w));
	else 
	return table[n][w]=profit(arr,wt,n-1,w);
}
int main()
{
	int arr[]={2,3,5,8,34};
	int wt[]={2,5,1,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int w=10;
	int max_profit=profit(arr,wt,n,w);
	cout<<"Max profit "<<max_profit<<endl;
}
