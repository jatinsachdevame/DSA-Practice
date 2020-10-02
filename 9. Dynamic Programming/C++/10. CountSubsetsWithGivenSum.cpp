/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : count the subset with given sum
 */
#include<bits/stdc++.h>
using namespace std;
int count(int arr[], int n, int i, int sum)
{	
	if(i==n)
	{
		if(sum==0) return 1;
		else return 0;
	}
	return count(arr,n,i+1,sum-arr[i])+count(arr,n,i+1,sum); 
}
int main()
{
	int arr[]={2,4,6,7,8,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=10;
	cout<<count(arr,n,0,k);
}
