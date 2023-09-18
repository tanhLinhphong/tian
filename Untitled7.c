#include<stdio.h>
int main()
{
	int arr[5];
	int i,max,sum,min;
	float avg;
	sum=0;
	avg=0;
	for(i=0;i<5;i++)
	{
		printf("%d nhap 1 so bat ki:\n",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<min)
		min=arr[i];
	}
	avg=(float)sum/5;
	printf("\n %d max",max);
	printf("\n %d sum",sum);
	printf("\n %d min ",min);
	printf("\n %f avg",avg);
	
	
	
	for (i=4;i>=0;i--)
	
	
	
	{
	
	printf("\n%d\n",arr[i]);
}
}

