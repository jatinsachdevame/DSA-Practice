/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(2^n)
 * Title : Equal sum partition
 */
#include<bits/stdc++.h>
using namespace std;
bool subset(int arr[],int n,int sum)
{
	//recursive approach
	if(n==0) return 0;
	if(sum==0)return 1;
	else if(arr[n-1]<=sum)
	return subset(arr,n-1,sum-arr[n-1])||subset(arr,n-1,sum);
	else if(arr[n-1]>sum)
	return subset(arr,n-1,sum);
}
int main()
{
	int arr[]={2,3,5,8,34};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum;
	for(int i=0;i<n;i++)
	sum+=arr[i];
	if(sum&1) cout<<"false";
	if(subset(arr,n,sum/2))
	cout<<"true";
	else cout<<"false";
}
