/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 * title: position of a leftmost set bit or significant bit
 //another method is to find the log2n
 */
#include <iostream> 
using namespace std; 
int setBitNumber(int n) 
{ 
	if (n == 0) 
		return 0; 

	int msb = 0; 
	while (n != 0) { 
		n = n / 2; 
		msb++; 
	} 

	return (1 << msb); 
} 
int main() 
{ 
	int n = 0; 
	cout << setBitNumber(n); 
	return 0; 
} 
