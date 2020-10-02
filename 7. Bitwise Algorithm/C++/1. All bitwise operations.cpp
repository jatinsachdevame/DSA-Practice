/*
 * Author : Rohit Shakya
 * Date   : April-2020 
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=1;
	x=(x<<4)+(x<<3);
	cout<<"X multiplied by 24: "<<x<<endl; //multiply by 24;
	
	x=15;
	x=(x<<1)+x+(x>>1);
	cout<<"X multiplied by 3.5: "<<x<<endl; ////multiply by 3.5;
	x=16;
	x=x^1; //create a mask at position one and xor with one; 
	cout<<"X after flipping the rightmost digit : "<<x<<endl; //flip the right most digit
	
	x=17;
	x=-(~x);
	cout<<"add 1 to 5: "<<x<<endl; //add 1 to the integer
	x=17;
	x=~(-x);
	cout<<"subtract 1 from 5: "<<x<<endl; //subtract 1 to the integer
	
	x=18;
	x=x&(x-1); 
	cout<<"turn off the rightmost set bit "<<x; //turn off the rightmost set bit;
	
	x=19;	
	x=(x%2==0)?x:x^1;
	cout<<"turn off the rightmost bit "<<x; //turn off the rightmost bit;
}
