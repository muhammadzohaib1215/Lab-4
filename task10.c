#include<stdio.h>

int main()
{
    int num_pizzas, crust, delivery;
    char cheese, student;
    float time;
    float total = 0;
    int discount = 0;

    printf("Welcome to Pizza Order System\n");

    // Number of Pizzas
    printf("How many pizzas do you want? (1/2/3): ");
    scanf("%d", &num_pizzas);

    if(num_pizzas == 1) {
        total = 8;
    }
    else if(num_pizzas == 2) {
        total = 15;
    }
    else if(num_pizzas == 3) {
        total = 21;
    }
    else {
        printf("Invalid number of pizzas\n");
        return 0;
    }

    // Crust Type
    printf("Choose crust type:\n1) Regular ($0)\n2) Thin ($1)\n3) Stuffed ($2)\nEnter option: ");
    scanf("%d", &crust);

    if(crust == 2) {
        total = total + 1;
    }
    else if(crust == 3) {
        total = total + 2;
    }
    else if(crust != 1) {
        printf("Invalid crust option\n");
        return 0;
    }

    // Extra Cheese
    printf("Do you want extra cheese? (y/n): ");
    scanf(" %c", &cheese);

    if(cheese == 'y' || cheese == 'Y') {
        total = total + 1.5;
    }
    else if(cheese != 'n' && cheese != 'N') {
        printf("Invalid cheese option\n");
        return 0;
    }

    // Time Discount
    printf("Enter order time (0-23): ");
    scanf("%f", &time);

    if(time > 11 && time < 14) {
        discount = total * 0.10;
        total = total - discount;
        printf("10%% discount applied: -$%d\n", discount);
    }

    // Student Discount
    printf("Do you have a student ID? (y/n): ");
    scanf(" %c", &student);

    if(student == 'y' || student == 'Y') {
        total = total - 2;
        printf("Student discount applied: -$2\n");
    }
    else if(student != 'n' && student != 'N') {
        printf("Invalid option\n");
        return 0;
    }

    // Delivery Option
    printf("Choose:\n1) Delivery (+$3)\n2) Pickup ($0)\nEnter option: ");
    scanf("%d", &delivery);

    if(delivery == 1) {
        total = total + 3;
    }
    else if(delivery != 2) {
        printf("Invalid delivery option\n");
        return 0;
    }

    // Free Item
    if(num_pizzas == 3 && crust == 3) {
        printf("You get FREE Garlic Bread!\n");
    }

    // Final Output
    printf("Your final total is: $%.2f\n", total);
    printf("Thank you for your order!\n");


    return 0;
}

