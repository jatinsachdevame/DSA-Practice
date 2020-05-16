#include<stdio.h>

void main()
{
	int i, j, n, min, index, temp;
	min = 0;
	index = 0;

	printf("Enter the size of the array:");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the elements of the array : ");

	for(i=0;i<n;++i)
	{
    		scanf("%d",&arr[i]);
    	}

	for(i=0;i<n;++i)
	{
		min = arr[i];
		index = i;
		for(j = i;j<n;++j)
		{
			if(min>arr[j])
			{
				min = arr[j];
				index = j;
			}
		}

		temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
	}
	for(i=0;i<n;++i)
	{
		printf("%d   ",arr[i]);
	}
	printf("\n");
}
