//10. Write a program to print a table of 5.
#include<stdio.h>
main()
{
    int i,num=5;
    for(i=1;i<=10;i++)
    printf("%dx%2d=%2d\n",num,i,num*i);
    getch();
    return 0;
}