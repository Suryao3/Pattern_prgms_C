#include<stdio.h>
#include<string.h>

int main()
{
	int row,column,n=5;
	//char name[10] = "12345";
	
	for(row=0;row<n;row++)
	{
		for(column=0;column<n;column++)
		{
			if(row == column || row+column == n-1)
			{
				printf("%d",row+1);
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
  0	*   *
  1	 * *
  2	  * 
  3	 * *
  4	*   *

*/

// shorthand property 

/*

	&& =>  condition1 && condition2
			False          X
			
	|| =>  condition1 || condition2
			True 			X


*/
