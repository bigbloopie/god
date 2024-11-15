include<stdio.h>

#include<conio.h>

void main()

{

clrscr();

charch;

printf("Enter a character: ");

scanf ("%c",&ch);

if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='1'|| ch=='o' || ch=='0' || ch=='u'|| ch=='U')

{ printf ("%c is a vowel",ch);

}

else if ((ch>='a' &&ch<='z) | | (ch>= 'A' &&ch<='Z')

{ printf("%c is a consonant",ch);

}

else

{

printf("%c is not a vowel nor a consonant",ch);

}

getch();)