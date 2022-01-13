#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num;
    printf("Please Enter a Number to verify Even Odd = ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is Even Number",num);
    }
    else
    {
        printf("%d is Odd Number", num);
    }
    getch();
    return 0;
}
