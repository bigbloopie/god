#include <stdio.h>

#include<conio.h>

void main()

{

int num;

clrscr();

printf("Enter the number:");

scanf("%d", &num);

if (num%2==0)

{

printf("The number is even.\n");

}

Else

{

printf("The number is odd.\n");

getch();

}