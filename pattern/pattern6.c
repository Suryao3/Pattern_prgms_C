#include<stdio.h>

int main()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i<=j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i>=j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	int n=4;
	for(int i=0;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(int i=0;i<=n;i++)
	{
		for(int j=n;j>=0;j--)
		{
			if(j >= n-i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	int i, space, rows, k = 0;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	for (i = 1; i <= rows; ++i, k = 0) 
	{
		for (space = 1; space <= rows - i; ++space) 
		{
		 printf(" ");
		}
		while (k != 2 * i - 1) 
		{
		 printf("*");
		 ++k;
		}
	  printf("\n");
	}
    return 0;
}
