/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 * title: position of a rightmost set bit
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//position of rightmost set bit, 110000 at 5th position
	int x=100;
	int position=1;
	while(!(x&1))
	{
		position++;
		x=x>>1;
	}
	cout<<"Position of right most set bit "<<position<<endl;
	//find rightmost Set bit
	int a=8;
	a=a&~(a-1);
	cout<<a;
}
