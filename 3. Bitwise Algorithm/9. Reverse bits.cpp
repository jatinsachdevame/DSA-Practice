/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */ 
//print reverse bits of a number 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=1029478; int m=32; //m=size_of_number_in_bits
	bitset<32> s;
	while(n)
	{
		if(n&1)
		s.set(m-1);
		n>>=1;
		m--;
	}
	cout<<s;
	
}
//if you will run while till n, it will return the result in required bits only
