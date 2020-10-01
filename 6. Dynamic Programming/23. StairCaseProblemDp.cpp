/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : StairCaseProblem, fibbonacci Sequence, dynamic programming
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
 	cout<<"enter the number of steps\n";
 	cin>>n;
 	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	for(int i=2;i<n;i++)
	{
		v.push_back(v[i-2]+v[i-1]);
  	}
	cout<<"unique number of ways to climb "<<n<<" steps "<<v[n-1];	  	
}
/*
	There's a staircase with N steps, and you can climb 1 or 2 steps at a time. Given N,
	write a function that returns the number of unique ways you can climb the staircase. 
	The order of the steps matters.
 	Generalize Formula: If we can take 1 or 2 steps at a time, then next value will be f[n-1]+f[n-2], and if we took {1,3,5} step
    at a time, then formula is f[n-1]+f[n-3]+f[n-5], So first initialize 5 terms to get next values.
*/

