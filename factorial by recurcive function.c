#include<stdio.h>
void main ()
{
int factorial(int);
printf("factorial of %d",factorial(5));
}
int factorial(int n)
{
if(n==1)
return 1;
else
return(n*factorial(n-1));
}
