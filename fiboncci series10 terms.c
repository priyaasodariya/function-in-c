#include<stdio.h>
int i;
void main ()
{
int fibonacci(int);
for (i=0;i<=10;++i)
{
  printf ("%d\n",fibonacci(i));
}
}
int fibonacci(n)
{
if(n==0)
return 0;
else
return(fibonacci(n-2)+fibonacci(n-1));
}
