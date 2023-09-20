#include<stdio.h>
void displayMenu();
void placeOder(char option );
float calculateTotalCost(char option , int quantity);

int main()
{
	char option;
	int quantity;
	
	do 
	{
	displayMenu();
	printf("Enter your option :");
	scanf("%c",&option);
	if (option !='d')
	{
		printf("Enter the quantity :");
		scanf("%d",&quantity);
		placeOder(option);
		float totalCost = calculateTotalCost(option,quantity);
		printf("Total cost:  %.2f\n\n",totalCost);
	}
}
while (option != 'd');
return 0;
}
void displayMenu()
{
	printf("***********Cafe Chat Menu***********\n");
	printf("1.cafe trung-30\n");
	printf("2.cafe den-15\n");
	printf("3.cafe sua-20\n");
	printf("4.Quit\n");	
}
void placeOder(char option)
{
	switch (option)
	{
		case '1':
			printf("Placing oder: cafe trung\n");
			break;
		case '2':
			printf("Placing oder: cafe den\n");
		    break;
		case '3' :
			printf("Placing oder: cafe sua\n");
			break;
		default:
			printf("Invalid option. Please try again.\n");	
	}
}
float calculateTotalCost(char option , int quantity)
{
	float price;
	switch (option)
	{
		case '1':
			price = 30.000;
			break;
		case '2':
		    price = 15.000;
		    break;
		case '3':
		    price = 20.000;
		    break;
		default :
		    price = 0.0000;
		    
	}
	return price * quantity;
}
