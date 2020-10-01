/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Fibbonacci series using dynamic programming
 *  Direct Formula : Fn = {pow([(sqrt(5) + 1)/2], n)} / sqrt(5)
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	vector<int> fibb;
	fibb.push_back(0);
	fibb.push_back(1);
	for(int i=2;i<n;i++)
	{
		fibb.push_back(fibb[i-1]+fibb[i-2]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<fibb[i]<<" ";
	}
}
