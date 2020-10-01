/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n^2)
 * Title : catalan number /dynamic programming
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value upto u want to print catalan numbers\n";
	cin>>n;
	vector<int> catalan(n,0);
	catalan[0]=catalan[1]=1;
	int sum=0;
	for(int j=2;j<n;j++)
	{
		for(int i=0;i<j;i++)
		{
			sum+=catalan[i]*catalan[j-1-i];
		}
		catalan[j]=sum;
		sum=0;
	}
	for(int i=0;i<n;i++)
	{
		cout<<catalan[i]<<" ";
	}
}
