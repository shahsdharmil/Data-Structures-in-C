//7.Perform program no.6 using function:
#include <stdio.h>
#include <conio.h>
int max(int no, int b[])
{
    int i, max;
    max = b[0];
    for (i = 0; i < no; i++)
    {
        if (max < b[i])
        {
            max = b[i];
        }
    }
    return max;
}
void main()
{
    int a[10], n, i;
    system("cls");
    printf("\nProgram made by 200420107042\n");
    printf("Enter how many numbers you want to enter : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Max value in array is: %d", max(n, a));
    return (0);
}