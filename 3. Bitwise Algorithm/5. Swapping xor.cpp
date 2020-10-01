/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 * title: Swapping 2 numbers without third variable and with bit manipulation
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//swap two number without third variable or by using bitwise xor operator
	int a=2,b=6;
	cout<<"before swapping "<<a<<" "<<b<<endl;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"after swapping  "<<a<<" "<<b<<endl;
	
}
