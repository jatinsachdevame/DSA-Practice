/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : compute sum of subarray elements 
 */
#include<bits/stdc++.h> 
using namespace std; 

//function compute sum all sub-array 
long int SubArraySum( int arr[] , int n ) 
{ 
	long int result = 0; 

	// computing sum of subarray using formula 
	for (int i=0; i<n; i++) 
		result += (arr[i] * (i+1) * (n-i)); 
	return result ; 
} 

int main() 
{ 
	int arr[] = {1, 2, 3} ; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout << "Sum of SubArray : "<< SubArraySum(arr, n) << endl; 
	return 0; 
} 

