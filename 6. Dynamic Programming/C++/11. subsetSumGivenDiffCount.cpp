/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title :
 */
#include<bits/stdc++.h>
using namespace std;
int fun2(int arr[],int n, int sum)
{
	if(sum==0) return 1;
	if(n==0) return 0;
	if(arr[n-1]<=sum)
	return fun2(arr,n-1,sum-arr[n-1])+fun2(arr,n-1,sum);
	else if(arr[n-1]>sum)
	return fun2(arr,n-1,sum);
}
int fun(int arr[],int n, int diff)
{
	int sum=0;
	for(int i=0;i<n;i++)
	sum+=arr[i];
	sum=(sum+diff)/2; // sum of subset 1 is x and sum of subset 2 is y, so sum sum is x+y and diff is x-y by adding equation we 
	// get x=(sum+diff)/2; so if there exist x, y will definitely exist
	return fun2(arr,n,sum);
}
int main()
{
	int arr[]={1,3,5,5,11,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int diff=8;
	cout<<fun(arr,n,diff);
}
