/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 * title : count the set bits
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=0;
	int x=17;
	while(x)
	{
		count+=(x&1);
		x>>=1;
	}
	cout<<"count of set bits is "<<count<<endl;	
}

