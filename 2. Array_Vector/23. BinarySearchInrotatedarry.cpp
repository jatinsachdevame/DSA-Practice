/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(logn)
 * Title : Binary Search in a rotated array
 */
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x)
{
	int low,high;
	low=0;
	high=n-1;
	int mid;
	while(low<high)
	{
		mid=low+(high-low)/2;
		if(arr[mid]>arr[high]) low=mid+1;
		else high=mid-1;
	}
	int rot=low;
	cout<<rot<<endl;
	low=0;
	high=n-1;
	while(low<=high)
	{		
			mid=(low+high)/2;
            int realmid=(mid+rot)%n;
            if(arr[realmid]==x)return realmid;
            if(arr[realmid]<x)low=mid+1;
            else high=mid-1;
	}
}
int main()
{
	int arr[]={2,3,4,5,6,7,0,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int z=search(arr,n,7);
	cout<<z<<endl;
}
