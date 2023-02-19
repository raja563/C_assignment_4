//9. Write a program to print cubes of the first 10 natural number"s
#include<stdio.h>
main()
{
    int i;
    for(i=1;i<=10;i++)
    printf("cube of %3d is %d\n",i,(i*i*i));
    getch();
    return 0;

}