#include<stdio.h>

int main()
{
	int n=4;
	for(int row=0;row<=n;row++)
	{
		for(int column=0;column<=n;column++)
		{
			if(row==0 || column==0 || row==4 || column==4)
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
	
    return 0;
}
