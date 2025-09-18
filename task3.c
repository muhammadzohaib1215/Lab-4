#include<stdio.h>
int main ()
{
	int pizzas;
	
	printf("\n1 pizza costs $8, 2 pizza costs $15, and 3 pizza costs $21");
    printf("\nHow many pizzas you want (1,2 or 3) : ");
    scanf("%d",&pizzas);
    
if(pizzas==1)
{
	printf("Your total cost of %d pizza  is $8",pizzas);
}
else if(pizzas==2)
{
	printf(" Your total cost of %d pizza  is  $15",pizzas);
}
else if(pizzas==3)
{
	printf("Your total cost of %d pizza is $21",pizzas);
}
else
{
	printf("Invalid choise ");
}
	
	return 0;		
}
