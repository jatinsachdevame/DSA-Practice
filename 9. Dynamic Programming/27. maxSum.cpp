#include<iostream>
using namespace std;
int max(int a, int b)
{
	return a>b?a:b;
}
int maxSum(int arr[],int n,int sum)
{
	if(n<0) return sum;
	sum=+max(maxSum(arr,n-2,sum+arr[n-1]),maxSum(arr,n-1,sum));
	return sum;
}
int main()
{
	int arr[]={5, 5, 10, 100, 10, 5};
	int n=*(&arr+1)-arr;
	cout<<maxSum(arr,n,0);
}
