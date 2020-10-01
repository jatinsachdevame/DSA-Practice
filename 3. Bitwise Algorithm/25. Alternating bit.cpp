/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : alternating bit
 */
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	int flag=1;
	while(n)
	{
		int x=n&1;
		n=n>>1;
		int y=n&1;
		if(x==y)
		{
			cout<<"false";
			flag=0;
			break;
		}
	}
	if(flag) cout<<"true"<<endl;
}
