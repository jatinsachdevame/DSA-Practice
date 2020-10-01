/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(logn)
 * Title : binary search
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> arr;
	cout<<"enter the element of vector in sorted order\n";
	int x;
	while(cin>>x)
	{
		arr.push_back(x);
	}
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	int element;
	cout<<"\nenter the element to be searched\n";
	scanf("%d",&element);
	int n=arr.size();
	int first=0;
	int last=n-1;
	int middle=first+(last-first)/2;
	while(first<=last)
	{
		if(element<arr[middle])
		{
			last=middle-1;
		}
		else if(element>arr[middle])
		{
			first=middle+1;
		}
		else if(element==arr[middle])
		{
			cout<<"found at position "<<middle+1<<"\n";
			break;
		}
		middle=first+(last-first)/2;
		if(first>last)
		{
			cout<<"not found\n";
		}
	}
}
