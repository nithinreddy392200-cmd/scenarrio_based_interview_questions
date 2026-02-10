#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value in A :");
    scanf("%d",&a); 
    printf("enter the value in B :"); 
    scanf("%d",&b);
    printf("enter the value in C :");
    scanf("%d",&c); 
    if( a+b==10||b+c==10||c+a==10)
    {
        printf ("10");
    }
   else if(a>10||b>10||c>10)
   {
       printf("5");
   }
   else
   {
       printf("0");
   }
   return 0;
}