#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "Heloworld";
	
	for(int row=0;row<9;row++)
	{
		for(int column=0;column<9;column++)
		{
			if(row==column || row+column == 9-1)
			{
				printf("%c",str[row]);
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
