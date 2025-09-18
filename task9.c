#include<stdio.h>
int main ()
{
	int delivery_option;
	//let the total be 20$
	int total = 20;
	
	printf("Do you want delivery or pickup \n1)delivery \n2)pickup : ");
	scanf("%d",&delivery_option);
	
	if(delivery_option==1)
	{
		total+=3;
		printf("Your total amount is %d$ : ",total);
	}else if(delivery_option==2)
	{
		printf("Your total amount is %d$ : ",total);
	}else{
		printf("Invalid option ");
	}
	return 0;
}
