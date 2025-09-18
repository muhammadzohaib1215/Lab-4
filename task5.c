#include<stdio.h>
int main ()
{
	//let total is 20$
float total=20;
char cheese;

printf("Do you want extra cheese y/n : ");
scanf("%c",&cheese);

if(cheese =='y' || cheese =='Y')
{
	total+=1.50;
	printf("Your'e new total is %.2f : ",total);
}
else if(cheese=='n'||cheese=='N')
{
	total+=0;
	printf("Your'e new total is %.2f :",total);
}
else{
	printf("Invalid option ");
}
	return 0;		
}
