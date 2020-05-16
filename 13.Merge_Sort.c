#include <stdio.h>
void merge(int arr[], int start, int mid, int end)
{
	int n1,n2,i,j,k;
	k = start;
	n1 = mid-start+1;
	n2 = end-mid;
	int L[n1];
	int R[n2];
	for(i=0;i<n1;++i)
	{
		L[i] = arr[start+i];
	}
	for(i=0;i<n2;++i)
	{
		R[i] = arr[mid+1+i];
	}
	i=0;
	j=0;
	k=start;
	while(i<n1 && j<n2)
	{
		if(L[i]<R[j])
		{
        			arr[k] = L[i];
			i++;
		}
		else
		{
		            arr[k] = R[j];
		            j++;
	        }
	        ++k;
	}
	while(i<n1)
	{
		arr[k] = L[i];
		++i;
		++k;
	}
	while(j<n2)
	{
		arr[k] = R[j];
		++j;
		++k;
	}
}

void mergeSort(int arr[], int start, int end)
{
	if(start<end)
	{
		int mid = (start+end)/2;
		mergeSort(arr, start, mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}

int main()
{
	int n,i,j;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements: ");
	for(i=0;i<n;++i)
	{
		scanf("%d",&arr[i]);
	}
    	mergeSort(arr, 0 ,n-1);
    	for(i=0;i<n;++i)
	{
    	    	printf("%d  ",arr[i]);
    	}
	printf("\n");
    	return 0;
}
