#include<stdio.h>
int main ()
{
	int pizza;
	int crust;
	
	printf("Enter the number of pizza : ");
	scanf("%d",&pizza);
	printf("Enter the type of crust: \n1)Regular\n2)Stuffed\n3)thin : ");
	scanf("%d",&crust);
	
	if(pizza==3 && crust==2)
{
	printf("You get free garlic bread ");	
	} 
	else {
		printf("You get nothing");
	}
		
	
	return 0;
}
