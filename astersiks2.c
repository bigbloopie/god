#include <stdio.h>

#include<conio.h>

void main()

{

clrscr();

int rows,i,j;

printf ("Enter taber of rous");

scanf("%d", &rows);

for(i=rows;i>=1;i--)

{ for(j=i;j>=1;j)

{

printf("");

}

printf (");

}

getch();
}