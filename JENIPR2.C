#include<stdio.h>
#include<conio.h>
void main(){
int HRA,DA,TA,a,b;
clrscr();
printf("base salary is: ");
scanf("%d",&b);
printf("HRA: ");
scanf("%d",&HRA);
HRA = (b*HRA)/100;
printf("DA: ");
scanf("%d",&DA);
DA = (b*DA)/100;
printf("TA: ");
scanf("%d",&TA);
TA = (b*TA)/100;
a = b+HRA+DA+TA;
printf("rs %d",a);
getch();
}