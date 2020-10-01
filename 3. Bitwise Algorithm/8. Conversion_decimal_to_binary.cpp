/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */ 
//conversion decimal to binary using O(logn) time complexity and O(1) extra space
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=30;
	bitset<16> a; //bitset of size 2 bytes or 16 bits
	int i=0;
	while(n)
	{
		if(n&1)
		a.set(i);
		n>>=1;
		i++;
	}
	cout<<a;
}
