/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Ugly number/ dynamic programming
 */
#include<bits/stdc++.h>
using namespace std;
int min(int a, int b, int c)
{
	return min(min(a,b),c);
}
int main()
{
	int n;
	cout<<"enter the value of n for nth ugly number"<<endl;
	cin>>n;
	vector<int> ugly(n);
	ugly[0]=1;
	int i2=0;
	int i3=0;
	int i5=0;
	int n2=ugly[i2]*2;
	int n3=ugly[i3]*3;
	int n5=ugly[i5]*5;
	for(int i=1;i<n;i++)
	{
		
		ugly[i]=min(n2,n3,n5);
		if(ugly[i]==n2)
		{
			n2=ugly[++i2]*2;
		}
		if(ugly[i]==n3)
		{
			n3=ugly[++i3]*3;
		}
		if(ugly[i]==n5)
		{
			n5=ugly[++i5]*5;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<ugly[i]<<" ";
	}
}
