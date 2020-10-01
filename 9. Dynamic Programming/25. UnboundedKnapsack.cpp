#include<bits/stdc++.h>
using namespace std;
int max(int a, int b) { return (a > b)? a : b;} 
int cutRod(int price[], int n) 
{ 
	if(n<=0) return 0;
	int maxVal=INT_MIN;
	for(int i=0;i<n;i++)
	maxVal=max(maxVal,price[i]+cutRod(price,n-i-1));
	return maxVal;
} 

int main() 
{ 
	int arr[] = {1, 5, 8, 9, 10, 17, 17, 20}; 
	int size = sizeof(arr)/sizeof(arr[0]); 
	printf("Maximum Obtainable Value is %d", cutRod(arr, size)); 
	getchar(); 
	return 0; 
} 

