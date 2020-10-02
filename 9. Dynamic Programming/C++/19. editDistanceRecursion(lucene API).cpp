/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(3^m)
 * Title : A Dynamic Programming based C++ program to find minimum number operations to convert str1 to str2 
 */
#include <bits/stdc++.h> 
using namespace std; 
int min(int x, int y, int z) 
{ 
	return min(min(x, y), z); 
} 

int editDistDP(string str1, string str2, int m, int n) 
{ 
	if(m==0)
	return n;
	if(n==0)
	return m;
	else if(str1[m-1]==str2[n-1])
	return editDistDP(str1,str2,m-1,n-1);
	else
	 {
	 	return 1+min(editDistDP(str1,str2,m-1,n), //remove
		 			 editDistDP(str1,str2,m,n-1), //insert
		 			 editDistDP(str1,str2,m-1,n-1)); //replace
	 }
	 
} 

int main() 
{ 
	string str1 = "sunday"; 
	string str2 = "saturday"; 
	cout << editDistDP(str1, str2, str1.length(), str2.length()); 
	return 0; 
} 

