// 4.Perform program no. 2 and 3 using function:
#include <stdio.h>
#include <conio.h>
void swap(int x, int y);
void expo(int a, int b);
int main()
{
    system("cls");
    printf("\nProgram made by 200420107042\n");
    int x, y;
    printf("Enter x and y \n");
    scanf("%d %d", &x, &y);
    swap(x, y);
    expo(x, y);
    return 0;
}

void swap(int xx, int yy)
{
    printf("After swapping the variables");
    int z;
    z = xx;
    xx = yy;
    yy = z;
    printf("\nSwapped values are x = %d y = %d \n", xx, yy);
}
void expo(int c, int d)
{
    int total = 1;
    for (int i = 0; i < d; i++)
    {
        total = total * c;
    }
    printf("X raised to y is = %d", total);
}
