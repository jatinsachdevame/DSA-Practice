#include<stdio.h>
int recursion (int n) 
{
	if(n == 0){
  	return 0;
}
else if(n == 1) 
{
	return 1;
} 
else 
{
	return (recursion(n-1) + recursion(n-2));
}
}

void main() 
{
	int n;
	int result = 0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	result = recursion(n);
	printf("Result is : %d\n",result);
}
