/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n^2)
 * Title : Selection sort
 */
#include <bits/stdc++.h> 
using namespace std; 
void swap(int *a, int *b) 
{ 
	int temp=*a;
	*a=*b;
	*b=temp; 
} 

void selectionSort(int arr[], int n) 
{ 
	int i, j, min; 
	for (i = 0; i < n-1; i++) 
	{ 
		min=i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min]) 
		{
			min=j;
		}
		swap(&arr[min], &arr[i]); 
	} 
}
int main() 
{ 
	int arr[] = {64, 25, 12, 22, 11}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	selectionSort(arr, n); 
	cout << "Sorted array: \n"; 
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0; 
}
