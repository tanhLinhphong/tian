#include<stdio.h>
int main()
{
	int arr[2] [3];
	int row,col;
	for (row=0;col<2;row++)
	{
		for(col=0;col<3;col++)
		
	
	{
		printf("\nenter a number a [%d][%d]:",row ,col);
		scanf("%d",&arr[row][col]);
	}
	}
	for (row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("\n The number at[%d][%d] is %d",row,col,arr[row][col]);
			
		}
		
		
	}
}

