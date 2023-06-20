//write c program to find the third angle of triangle if two other angles are given.

#include<stdio.h>
#include<conio.h>

void main(){

int j,e,n;

clrscr();

printf("first angle:");
scanf("%d",&j);

printf("second angle:");
scanf("%d",&e);
n = 180 - (j+e);
printf("third angle %d",n);
getch();
}



