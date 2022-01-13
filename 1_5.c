//5.Write a calculator program(add,subtract,multiply,divide). Prepare user defined function for each functionality:
#include <stdio.h>
#include <conio.h>
void add(int x, int y);
void sub(int a, int b);
void mul(int aa, int bb);
void div(int cc, int dd);
int main()
{
    system("cls");
    printf("\nProgram made by 200420107042\n");
    int x, y;
    printf("\nEnter x and y \n");
    scanf("%d %d", &x, &y);
    add(x, y);
    sub(x, y);
    mul(x, y);
    div(x, y);
    return 0;
}

void add(int a1, int a2)
{
    int total = a1 + a2;
    printf("\nADDITION IS %d\n", total);
}

void sub(int s1, int s2)
{
    int total = s1 - s2;
    printf("SUBTRACTION IS %d\n", total);
}

void mul(int m1, int m2)
{
    int total = m1 * m2;
    printf("MULTIPLICATION IS %d\n", total);
}

void div(int d1, int d2)
{
    float total = (float)d1 / d2;
    printf("DIVISION IS %.2f\n", total);
}
