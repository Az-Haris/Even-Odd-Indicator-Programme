#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num;
    printf("Please Enter Your Number  : ");
    scanf("%d", &num);
    if(num%2!=0)
    {
        printf("%d is a Odd Number",num);
    }
    else
    {
        printf("%d is a Even Number",num);
    }
    getch();
    return 0;
}
