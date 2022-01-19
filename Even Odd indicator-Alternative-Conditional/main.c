#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num;
    printf("Please Enter Your Number : ");
    scanf("%d", &num);
    (num%2==0) ? printf("%d is Even Number",num) : printf("%d is Odd Number",num);
    getch();
    return 0;
}
