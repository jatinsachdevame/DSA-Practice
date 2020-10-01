#include <stdio.h>
int main()
{
	int n,i;
	int result = 1;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<n/2 && (result == 1);++i)
	{
		if(n%i==0)
		{
			result = 0;
		}
	}
	if(result)
	{
		printf("Prime number\n");
	}
	else
	{
		printf("Not a prime number\n");
	}

	return 0;
}
