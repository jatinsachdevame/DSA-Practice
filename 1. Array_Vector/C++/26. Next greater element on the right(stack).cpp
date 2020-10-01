/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Next greater element on the right side
 */
#include <bits/stdc++.h> 
using namespace std; 
void printNGE(int arr[], int n) { 
	stack<int> s;
	s.push(arr[0]);
	for(int i=1;i<n;i++)
	{
		if(s.empty())
		{
			s.push(arr[i]);
			continue;
		}
		while(!s.empty()&&s.top()<arr[i])
		{
			cout<<s.top()<<" -> "<<arr[i]<<endl;
			s.pop();
		}
		s.push(arr[i]);
	}
	while(!s.empty())
	{
		cout<<s.top()<<" -> "<<"-1"<<endl;
		s.pop();		
	}
} 

int main() { 
int arr[] = {3,5,2,1,7}; 
int n = sizeof(arr) / sizeof(arr[0]); 
printNGE(arr, n); 
return 0; 
}

