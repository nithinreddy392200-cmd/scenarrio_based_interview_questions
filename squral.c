
#include <stdio.h>
void main() 
{
    int temp, summer;
    printf("Enter the temparature: ");
    scanf("%d",&temp);
    printf("Enter 1 for summer\t 0 for not  the summer");
    scanf("%d",&summer);
    if(summer)
    {
        if(temp>=60&& temp<=100)
        {
            printf("true");
        }
        else
        {
        printf("false");
        }
    }
    else
    {
        if (temp>=60 && temp<=90)
    {
    printf("true");
    }
    else
    {
        printf("false");
    }
    }
}