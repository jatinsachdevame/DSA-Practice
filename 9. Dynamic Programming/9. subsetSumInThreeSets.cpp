/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(3^n)
 * Title : Equal sum partition in three subsets
 */
#include<bits/stdc++.h>
using namespace std;
bool subset(int arr[],int n,int a, int b,int c)
{
	//recursive approach
	if(a==0&&b==0&&c==0)return 1;
	if(n<0) return 0;
	bool A=false;
	if(!A&&(a-arr[n-1]>=0))
	return subset(arr,n-1,a-arr[n-1],b,c);
	bool B=false;
	if(!A&&!B&&b-arr[n-1]>=0)
	return subset(arr,n-1,a,b-arr[n-1],c);
	bool C=false;
	if(!A&&!B&&!C&&c-arr[n-1]>=0)
	return subset(arr,n-1,a,b,c-arr[n-1]);
	return A||B||C;
}
int main()
{
	int arr[]={3,3,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum;
	for(int i=0;i<n;i++)
	sum+=arr[i];
	if(sum%3!=0) cout<<"false";
	if(subset(arr,n,sum/3,sum/3,sum/3))
	cout<<"true";
	else cout<<"false";
}
