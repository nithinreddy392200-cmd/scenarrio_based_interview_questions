#include <stdio.h>
void main()
{
    int a,b,c;
    printf(" Enter the value in A :");
scanf("%d",&a);
printf("Enter the value in B:");
scanf("%d",&b);
printf("Enter the value in C:");
scanf("%d",&c);
if(a==2 && b==2 && c==2)
{
    printf("10");
}
else if(a==b && b==c && c==a)
{
printf("5");
}
else if(b!=a && c!=a)
{
    printf("1");
}
else
{
    printf("0");
}
}
