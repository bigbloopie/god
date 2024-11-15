#include<stdio.h>

#include<conio.h>

void main();

{

clrscr();

inti,n;

int first=0, second=1,next;

printf("Enter a number in terms of Fabonacii series: ");

scanf("%d",&n);

printf("Fabonacii series for %d: \n",n);

for(i=1;i<=n;i++)

{

if(i<1)

{

next=i;

printf("%d", next);

}

else

{

next=first+second;

printf("Fabonacii series of %d %d", n,next);

first=second;

second-next;}

}

getch();

}