#include<stdio.h>
int chuvi(int a , int b);
int dientich(int a , int b);
int main()
{
	int width,height;
	printf("\n Nhap chieu rong:");
	scanf("%d",&height);
	printf("\n Nhap chieu dai:");
	scanf("%d",&width);
	
	printf("\nChu vi hinh chu nhat la:\n %d",chuvi(width,height ));
	printf("\nDien tich hinh chu nhat la:\n %d",dientich(width,height));
	
	return 0;
	
}
int chuvi(int a, int b)
{
 
return (a+b)*2;
}

int dientich(int a , int b)
{

return a*b;
}
