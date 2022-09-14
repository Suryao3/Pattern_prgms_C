#include<stdio.h>

int main()
{
	int number = 5;
	int temp = number - 1;
	int i,j,incre,k;
	
	for(i=1;i<=number;i++)
	{
		for(j=0,k=number,temp=i;j<i;j++,--k)
		{
			if(j==0)
			{
				printf("%3d",i);
			}
			else
			{
				incre = temp+k;
				temp = incre;
				printf("%3d",incre);
			}
		}
		printf("\n");
	}
	
    return 0;
}
