#include<stdio.h>
int tong(int a , int b);
int hieu(int a , int b);
int tich(int a , int b);
float thuong(int a , int b);
int  menu ();
 int main()
 {
 	int num1,num2;
 	int check;
 	printf("nhap gia tri thu nhat:");
 	scanf("%d",&num1);
 	printf("nhap gia tri thu 2:");
 	scanf("%d",&num2);
 	
 	int sum = tong(num1,num2);
 	int sub = hieu(num1,num2);
 	int mtp = tich(num1,num2);
 	float div = thuong(num1,num2);
 	menu (num1,num2);
 	printf("chon 1 phep tinh can thuc hien\n");
 	scanf("%d",&check);
 	switch (check)
 	{
 		case 1:
 			printf("1.tong 2 so la : %d",sum);
 			break;
 		case 2:
 			printf("2.hieu 2 so la : %d",sub);
 			break;
 		case 3:
 			printf("3.tich 2 so la : %d",mtp);
 			break;
 		case 4:
 			printf("4.thuong 2 so la : %f",div);
 			break;
 		default :
 		printf("Loi");
	 }
 	
 	
 	
 	return 0;
 }
 int tong(int a, int b)
 {
	 printf("\n\n phep tinh cong :\n")
 	int c;
 	return c=a+b;
 }
 int hieu(int a , int b)
 {
 	int c;
 	printf("\n\n phep tinh tru:\n");
 	return c=a-b;
 }
 int tich(int a,int b)
 {
 	int c;
 printf("\n\n phep tinh nhan:\n");
 return c=a*b;
}
float thuong(int a ,int b)
{
    float c;
	printf("\n\n phep tinh chia:\n");
	return c=(float)a/b;
}
int menu(int a ,int b)
{
	printf("\nHai so vua nhap la: %d %d",a,b);
	printf("\n1.tong");
	printf("\n2.hieu");
	printf("\n3.tich");
	printf("\n4.thuong");
}
 
