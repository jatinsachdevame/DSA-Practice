/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(2^n)
 * Title : knapsack problem :given two arrays value array and weight array, size of two array and capacity, 
 find out the max profit
 */
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int profit(int arr[],int wt[],int n,int w)
{
	int table[n+1][w+1];
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=w;j++)
		{
			if(i==0||j==0)
			table[i][j]=0;
			else if(wt[i-1]<=j)
			table[i][j]=max(table[i-1][j-wt[i-1]]+arr[i-1],table[i-1][j]);
			else 
			table[i][j]=table[i-1][j];
		}
	}
	
	return table[n][w];
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
