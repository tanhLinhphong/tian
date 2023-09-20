#include<stdio.h>
char xeploai(int a);
int main ()
{
	int grade;
	printf("Nhap tong diem :\n");
	scanf("%d",&grade);
	printf("\n%c",xeploai(grade));
}
char xeploai(int a)
{
	char g;
	if (a>=80)
		g='A';
	else if (a<80&&a>=70)
		g='B';
		else if (a<70&&a>=60)
		
			g='C';
		else if (a<60&&a>=45)
		
			g='D';
		else
		g='F';
		return g;
}
