//3.Write a program that computes x raised to the power y:
#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y, ans = 1, i;
    system("cls");
    printf("\nProgram made by 200420107042\n");
    printf("Enter the value of x: ");
    scanf("\n%d", &x);
    printf("Enter the value of y: ");
    scanf("\n%d", &y);
    for (i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    printf("\n X raised to the power Y = %d", ans);
    getch();
}
