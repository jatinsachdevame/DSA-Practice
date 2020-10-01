/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title : sort an array in Zig-Zag form 
 */
#include <iostream> 
using namespace std; 
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void zigZag(int arr[],int n)
{
	bool flag=true;
	for(int i=0;i<n-1;i++)
	{
		if(flag)
		{
			if(arr[i]>arr[i+1])
			{
				swap(arr[i],arr[i+1]);
			}
		}
		else
		{
			if(arr[i]<arr[i+1])
			{
				swap(arr[i],arr[i+1]);
			}
		}
		flag=!flag;
	}
}
int main() 
{ 
	int arr[] = {4, 3, 7, 8, 6, 2, 1}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	zigZag(arr, n); 
	for (int i=0; i<n; i++) 
		cout << arr[i] << " "; 
	return 0; 
} 

