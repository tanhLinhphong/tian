#include<stdio.h>
int main()
{
	float r,c,s;
	printf("Ban kinh cua hinh tron la r=");
	scanf("%f",&r);
	c=6.28*r;
	s=3.14*r*r;
	printf("\n");
	printf("Ket qua tinh chu vi va dien tich hinh tron:\n");
	printf("Ban kinh hinh tron:	         r=%8.1f met \n",r);
	printf("Chu vi hinh tron:			 c=%8.2f met \n",c);
	printf("Dien tich hinh tron			 s=%8.2f met vuong",s);
    
    
    printf("Data Type		\t| Size of byte\n");
    printf("int 			\t| %d byte \n", sizeof(int));
    printf("float			\t| %d byte \n", sizeof(float));
    printf("unsigned int    \t| %d byte \n", sizeof(unsigned int));
    printf("short int       \t| %d byte \n", sizeof(short int));
    printf("long int        \t| %d byte \n", sizeof(long int));
    printf("double			\t| %d byte \n", sizeof(double));
    return 1;
}

