#include<stdio.h>
#include<conio.h>
int main void()
{
int a[10],b,c,d,i;
printf("enter the number of elements");
scanf(&d,d);
for(i=0;i<d;i++)
{
scanf(&d,a[i]);
}
c=a[0];
for(i=0;i<d;i++)
{
if(a[i]>c)
{
c=a[i];
}
}
printf("%d",c);
return 0;
}
