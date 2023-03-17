#include<stdio.h>

#include<conio.h>

main ()

/*Declare the variables*/

int numl, num2, temp;

clrscr();

printf("Enter first number: ");

scanf("%d", &num1);

printf("Enter second number: ");

scanf("%d", &num2);

printf("Numbers before swapping: %d %d", numl, num2); /*swapping the values of variables*/

temp = numl;

num1 = num2;

num2 = temp;

printf("Numbers after swapping: %d %d", numl, num2);

getch();

}
