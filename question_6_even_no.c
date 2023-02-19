
//6. Write a program to print the first 10 even natural numbers.
#include<stdio.h>
main()
{
    int i;
    for(i=2;i<=10;i++)
    if(i%2==0)
    printf("%d  ",i);
    getch();
    return 0;
    
}