// 2.Write a program to take two input variable from user and swap that values:
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, temp;
    system("cls");
    printf("\nProgram made by 200420107042\n");
    printf("Enter the value of a :  ");
    scanf("\n%d", &a);
    printf("Enter the value of b :  ");
    scanf("\n%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping the variables");
    printf("\nValue of a =  %d \nValue of b =  %d", a, b);
    return (0);
}
