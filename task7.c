#include<stdio.h>
int main()
{
	// let the total amount is 20$
	int total =20;
	char id;
	
	printf("Students will get a 2$ discount if they han an id \n");
	printf("Do you have a student ID y/n: ");
	scanf("%c",&id);
	
	if(id=='Y'||id=='y')
	{
		total=total-2;
		printf("Your total price is %d$",total);
	}else if (id=='N'||id=='n')
	{
		printf("Your total cost is %d$",total);
	 } 
		else {
			printf("Invalid option");
		}

	return 0;
}
