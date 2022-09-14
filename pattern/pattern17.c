#include<stdio.h>

int main()
{
	int row,column,space;
	
	for(row=0;row<=4;row++)
	{
		for(column=0;column<=4;column++)
		{
			if(row==2 || column==2)
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


/*

01234 
  *   0      
  *   1
***** 2
  *   3
  *   4
 
*/



