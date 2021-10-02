/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n^2)
 * Title : subset sum
 */
#include<bits/stdc++.h>
using namespace std;
bool subset(int arr[],int n,int w)
{
	bool table[100][100];
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=w;j++)
		{
			if(i==0) table[i][j]=0;
			if(j==0) table[i][j]=1;
			else if(arr[i-1]<=j)
			table[i][j]=table[i-1][j-arr[i-1]]||table[i-1][j];
			else if(arr[i-1]>j)
			table[i][j]=table[i-1][j];
		}
	}
	
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
