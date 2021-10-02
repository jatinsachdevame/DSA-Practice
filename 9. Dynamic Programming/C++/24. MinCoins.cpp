/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : 
 * Title : A Naive recursive C++ program to find minimum of coins to make a given change V 
 */
#include<bits/stdc++.h> 
using namespace std; 
int min(int a,int b)
{
	return a<b?a:b;
}
int minCoins(int coins[], int n, int v) 
{
	if(v<=0) return 0;
	int minV=INT_MAX;
	for(int i=0;i<n;i++)
	{
		minV=min(minV,1+minCoins(coins,n-i,v-coins[i]));
	} 
	return minV;
} 

int main() 
{ 
	int coins[] = {9, 6, 5, 1}; 
	int m = sizeof(coins)/sizeof(coins[0]); 
	int V = 11; 
	cout << "Minimum coins required is "<< minCoins(coins, m, V); 
	return 0; 
} 

