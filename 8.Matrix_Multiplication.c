#include<stdio.h>
#include<stdlib.h>
int  main()
{
	int a , b , c,d,m,n ,k ;
	int sum=0;
	int fst[10][10] , sec[10][10], mul[10][10];


	printf("Enter number of rows and columns of first matrix\n");
	scanf("%d%d", &a, &b);
	printf("Enter elements of first matrix\n");

	for (c = 0; c < a; c++)
		for (d = 0; d < b; d++)
    			scanf("%d", &fst[c][d]);

	printf("enter the no of rows and colums for second matrix\n");
	scanf("%d%d",&m,&n);

	if(b!=m)
	printf("multiplication is not possible\n");
	else
	{
		printf("enter elements of second matrix\n");
		for(c=0;c<m;c++)
			for(d=0;d<n;d++)
				scanf("%d", &sec[c][d]);
		for (c = 0; c < a; c++)
		{
			for (d = 0; d < n; d++)
			{
      				for (k = 0; k < m; k++)
				{
        					sum = sum + fst[c][k]*sec[k][d];
        				}
			mul[c][d] = sum;
			sum = 0;
			}
		}
 		printf("Product of the matrices:\n");

		for (c = 0; c < a; c++)
		{
			for (d = 0; d < n; d++)
				printf("%d\t", mul[c][d]);

			printf("\n");
		}
 	 }

return 0;
}
