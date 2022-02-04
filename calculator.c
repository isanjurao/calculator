#include<stdio.h>
#include<conio.h>
int a,b,r;
float c;
void sum()
{
r = a+b;
printf("\nResult is:%d",r);

}

void sub()
{
r = a-b;
printf("\nResult is:%d",r);
}

void multi()
{
r = a*b;
printf("\nResult is:%d",r);
}

void div()
{
c =((float)a/(float) b)
;
printf("\nResult is:%f",c);
}
void main()
{
int i;


printf("\nEnter the number:");
scanf("%d",&a);
printf("\nEnter the number:");
scanf("%d",&b);

printf("\n1 Addition\n");
printf("2 Subtraction\n");
printf("3 Multiplication\n");
printf("4 Division\n\n ");
scanf("%d",&i);
switch(i)
{
case 1:
	sum();
	break;
case 2:
	sub();
	break;
case 3:
	multi();
	break;
case 4:
	div();
	break;

}
getch();
}


