#include<stdio.h>

int main()
{
	int row,n=5,column,space,t=0;
	
	for(row=0;row<n;row++)
	{
		for(space=row;space<n-1;space++)
		{
			printf(" ");
		}
		for(column=0;column<=row*2;column++)
		{
			printf("*");
		}
		printf("\n");
	}

	
    return 0;
}


/*
	
  ***
 *****
******* 
  
*/
