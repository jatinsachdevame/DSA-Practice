/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 * title: Count number of bits to be flipped to convert A to B
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=17,b=27; //Count number of bits to be flipped to convert A to B, 
	//a^b contains only flipped bits, so count the set bits in a^b
	int count=0;
	axorb=a^b;
	while(axorb)
	{
		count+=(aaxorb&1);
		axorb>>=1;
	}
	cout<<"No of bits will change "<<count<<endl;	
}

