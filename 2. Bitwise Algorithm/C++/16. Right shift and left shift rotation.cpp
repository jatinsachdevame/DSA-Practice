/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 * title	:right shift rotation and left shift rotation  
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{	//for a 32 bit number
	int n=30,pos=2; 
	n=n>>pos|n<<(32-pos); //right shift rotation
	cout<<n<<endl;
	int m=16; 
	m=m<<pos|m>>(32-pos); //left shift rotation
}
