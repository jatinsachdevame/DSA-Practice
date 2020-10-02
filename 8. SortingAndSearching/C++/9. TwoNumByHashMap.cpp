/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(nlogn)
 * Title :
 */
#include<bits/stdc++.h>
using namespace std;
void findTwoNum(int arr[],int n,int target)
{
	unordered_set<int> s;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		if(s.find(target-arr[i])!=s.end())
		{
			cout<<"found "<<arr[i]<<" "<<target-arr[i]<<endl;
			flag=true;
			break;
		}
		else
		s.insert(arr[i]);
	}
	if(!flag) cout<<"not found"<<endl;
} 
int main()
{
	int arr[]={1,2,3,5,2,4,1,6,7,8,0,0,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target;
	cout<<"enter the target"<<endl;
	cin>>target;
	findTwoNum(arr,n,target);
}

