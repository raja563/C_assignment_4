//5. Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i+1);
        }
    }
    return 0;
}