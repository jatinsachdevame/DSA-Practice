/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(N)
 * Title : Average of running stream
 */
#include <bits/stdc++.h> 
using namespace std; 
float getAvg(int x) 
{ 
	static int sum, n; 
	sum += x; 
	return (((float)sum) / ++n); 
} 
void streamAvg(float arr[], int n) 
{ 
	float avg = 0; 
	for (int i = 0; i < n; i++) 
	{ 
		avg = getAvg(arr[i]); 
		cout<<"Average of "<<i+1<<" numbers is "<<fixed<<setprecision(1)<<avg<<endl; 
	} 
	return; 
} 
int main() 
{ 
	float arr[] = { 10, 20, 30, 40, 50, 60 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	streamAvg(arr, n); 
	return 0; 
} 


