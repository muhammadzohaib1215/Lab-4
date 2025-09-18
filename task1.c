#include<stdio.h>
int main ()
{
	int pizza_size;
	
	printf("Enter the pizza size \n1)small \n2)medium \n3)large : ");
	scanf("%d",&pizza_size);
	
	if(pizza_size==1)
	{
		printf("Your pizza size is small");
	}
	else if(pizza_size==2)
	{
		printf("Your pizza size is medium");
	}
	else if(pizza_size==3)
	{
		printf("Your pizza size is large");
	}
	else
	{
		printf("Invalid option");
    }
return 0;

}
