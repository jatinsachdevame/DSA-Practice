/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n2)
 * Title : next greater element in right
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={2,3,4,5,1,2,1,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int arr2[n];
	for(int i=0;i<n;i++)
	{
		int flag=0;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				flag=1;
				arr2[i]=arr[j];
				break;
			}
		}
		if(!flag)arr2[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr2[i]<<" ";
	}
}
