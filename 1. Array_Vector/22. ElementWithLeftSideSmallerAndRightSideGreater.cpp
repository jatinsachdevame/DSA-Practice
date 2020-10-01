/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Space complexity : O(n)
 * Title : Element in left are smaller and right are greater
 */
#include <bits/stdc++.h> 
using namespace std; 
int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a<b?a:b;
}

int findElement(int arr[], int n) 
{ 
	int leftMax[n];
	leftMax[0]=INT_MIN;
	for(int i=1;i<n;i++)
	{
		leftMax[i]=max(leftMax[i-1],arr[i-1]);
	}
	int rightMin=INT_MAX;
	for(int i=n-1;i>=0;i--)
	{
		if((leftMax[i]<arr[i])&&(rightMin>arr[i]))return i;
		rightMin=min(rightMin,arr[i]);
	}
	return -1;
} 

int main() 
{ 
	int arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9}; 
	int n = sizeof arr / sizeof arr[0]; 
	cout << "Index of the element is " << findElement(arr, n); 
	return 0; 
} 
//Note: When we have to compare with two values at the same time, pre compute them and store in extra space and use them in next traversal
// same thing happens in water traping problem
