#include<stdio.h>
int main ()
{
	int crust;
	// let pizza cost is 20
	int total = 20;
	printf("1)Regular crust = 0$, \n2)Thin crust = 1$, \n3)stuffed crust = 2$");
	printf("\nEnter the crust : ");
	scanf("%d",&crust);
	
	if(crust==1){
		total+=0;
		printf("\nThe new total cost is %d : ",total);
	}
	else if (crust==2)
	{
		total +=1;
		printf("\nThe new total cost is %d : ",total);
		
	}
	else if (crust==3)
	{
		total+=2;
		printf("\nThe new total cost is %d : ",total);
		
	}else
	{
		printf("Invalid option ");
	}
	return 0;		
}
