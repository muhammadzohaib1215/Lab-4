#include<stdio.h>
int main ()
{
	int number_of_pizzas;
	printf("A small pizza is of 8$");
    printf("\nHow many pizzas you want : ");
    scanf("%d",&number_of_pizzas);
if(number_of_pizzas>1){
	printf("\n Check our multiple pizza deals");
}else if(number_of_pizzas==1){
	printf("Your total is 8$");
}
 
	return 0;
	
	
	
}
