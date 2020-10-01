/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(nlogn)
 * Title : Chocolate distribution problem //search min in groups
 */
#include<bits/stdc++.h> 
using namespace std; 
int findMinDiff(int arr[], int n, int m) 
{ 
	if (m==0 || n==0) 
		return 0; 
	sort(arr, arr+n); 
	// Number of students cannot be more than number of packets 
	if (n < m) 
	return -1; 
	int min_diff = INT_MAX; 
	for (int i=0; i+m-1<n; i++) 
		{ 
			int diff = arr[i+m-1] - arr[i]; 
			if (diff < min_diff) min_diff = diff; 
		}		 
	return min_diff; 
} 

int main() 
{ 
	int arr[] = {12, 4, 7, 9, 2, 23, 25, 41,30, 40, 28, 42, 30, 44, 48, 43, 50}; 
	int m = 7;  
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout << "Minimum difference is "<< findMinDiff(arr, n, m); 
	return 0; 
} 

