#include<stdio.h>

void main() 
{
	int i,n;
	int prev1, prev2;

	prev1 = 0;
	prev2 = 1;

	int result = 0;

	printf("Enter the value of n : ");
	scanf("%d",&n);

	for(i=2;i<=n;++i)
	{
		result = prev1 + prev2;
		prev1 = prev2;
		prev2 = result;
	}

	printf("Result is : %d\n",result);
}
