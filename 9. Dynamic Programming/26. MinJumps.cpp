/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : Minimum number of jumps
 */
#include <bits/stdc++.h> 
using namespace std; 
int minJumps(int arr[], int n) 
{ 
	if(n<1)
	return 0;
	return min(minJumps(arr,n-arr[n-1])+1,minJumps(arr,n-1)+1);
} 
 
int main() 
{ 
	int arr[] = { 1, 3, 6, 3, 2, 3, 6, 8, 9, 5,1,1,1,1 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Minimum number of jumps to"; 
	cout << " reach the end is " << minJumps(arr, n)+1; 
	return 0; 
}
