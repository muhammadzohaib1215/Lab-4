#include<stdio.h>
int main ()
{
	float time;
	int total=20;
	int discount;
	
	//suppose total is 20$
	
	printf("Your'e current total is 20$  but there is 10 percent discount between 11Am and 2Pm.");
	printf("\nEnter your'e current time (0-23) : ");
	scanf("%f",&time);
	
	if(time>11 && time<14)
	{
		//Apply discount
		discount=total*10/100;
		total=total-discount;
		printf("Your'e new discounted total is %d$ :",total);
	}
	else
	{
		printf("Your'e total is %d$ ",total);
	}
	
	return 0;
}
