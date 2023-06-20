//write a programe to convert temperature from degreescelcius to fahrenhit.

#include<stdio.h>
#include<conio.h>

void main()
{

int f,c;

clrscr();

printf("the temperature in celsius :");
scanf("%d",&c);

f = (c *9/5)+32;

printf("the temperrature in fahrenheit %d",f);




getch();
}