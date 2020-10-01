#include <stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements to be sorted: ");
	for(i=0;i<n;++i)
	    	scanf("%d",&arr[i]);
	for(i=1;i<n;++i)
	{
		j = i-1;
		temp = arr[i];
		while(j>=0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	printf("Sorted array\n");
	for(i=0;i<n;++i)
		printf("%d  ",arr[i]);
	printf("\n");
	return 0;
}
