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
typedef pair<int,int> p;
bool fcompare(pair<int,p>a1,pair<int,p>a2)
{
	if(a1.second.second!=a2.second.second) return a1.second.second>a2.second.second;
	else return a1.second.first<a2.second.first;
}
void sortByFreq(int arr[],int n)
{
	unordered_map<int,p> m;
	for(int i=0;i<n;i++)
	{
		if(m.find(arr[i])!=m.end())
		{
			m[arr[i]].second++;
		}
		else
		{
			m[arr[i]]=make_pair(i,1);
		}
	}
	vector<pair<int,p>> v;
	for(auto i=m.begin();i!=m.end();i++)
	{
		v.push_back(make_pair(i->first,i->second));
	}
	sort(v.begin(),v.end(), fcompare);
	for(int i=0;i<v.size();i++)
	{
		int count=v[i].second.second;
		while(count--)
		cout<<v[i].first<<" ";
	}
	
} 
int main()
{
	int arr[]={1,2,3,5,2,4,1,6,7,8,0,0,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	sortByFreq(arr,n);
}

