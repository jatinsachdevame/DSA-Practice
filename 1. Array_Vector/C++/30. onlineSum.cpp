/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(N)
 * Title : Online Sum
 */
#include <bits/stdc++.h> 
using namespace std; 
void onlineSum(int n)
{
	int sum=0;
	int sum1=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
		sum1+=sum;
		cout<<sum<<"->";
		cout<<sum1<<" ";
	}
	return ;
}
int main() 
{ 
	int n=10;
	onlineSum(n); 
	return 0; 
} 


