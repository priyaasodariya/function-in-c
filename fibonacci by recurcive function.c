#include<stdio.h>
int fibonacci(int n)
{
if (n==0)
return 0;
if(n==1)
return 1;
else
return (fibonacci(n-1)+fibonacci(n-2));
}
void main ()
{
int i;
for(i=0;i<=10;i++)
{
printf("%d ",fibonacci(i));

}
}
