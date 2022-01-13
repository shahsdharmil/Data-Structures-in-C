#include <stdio.h>
#include <conio.h>
int insert(int pos, int num, int size, int b[])
{
    int i;
    for (i = size; i > pos - 1; i--)
    {
        b[i] = b[i - 1];
    }
    b[pos - 1] = num;
    size++;
    printf("your array after inserting the element you provided: ");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", b[i]);
    }
    return 0;
}
Delete(int del, int size, int b[])
{
    int i;
    for (i = del - 1; i < size; i++)
    {
        b[i] = b[i + 1];
    }
    size--;
    printf("your array after deleting the potion's number you provided: ");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", b[i]);
    }
    return 0;
}
int display(int dis, int size, int b[])
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (i == dis - 1)
        {
            printf("number at entered position is: %d", b[i]);
        }
    }
    return 0;
}
int search(int srch, int size, int b[])
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (srch == b[i])
        {
            printf("\nyour search element is at position: %d", i + 1);
        }
    }
    return 0;
}
int max(int size, int b[])
{
    int i, max;
    max = b[0];
    for (i = 0; i < size; i++)
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
    int a[50], size, i, pos, num, ch, del, dis, srch;
    system("cls");
    printf("Enter how many numbers you want to enter:");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("enter the element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nenter an action that you want to perform with your entered array ");
    printf("\n1=insert \n2=delete \n3=dispaly \n4=search \n5=maximum: ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("enter the number which you want to insert: ");
        scanf("%d", &num);
        printf("enter the position where you want to enter the number: ");
        scanf("%d", &pos);
        insert(pos, num, size, a);
    }
    else if (ch == 2)
    {
        printf("enter the position that you want to delete from array: ");
        scanf("%d", &del);
        if (del < 0 || del > size)
        {
            printf("Enter valid position");
        }
        Delete(del, size, a);
    }
    else if (ch == 3)
    {
        printf("enter the positon of element which youwant to display: ");
        scanf("%d", &dis);
        display(dis, size, a);
    }
    else if (ch == 4)
    {
        printf("enter the element which you want to search in array: ");
        scanf("%d", &srch);
        search(srch, size, a);
    }
    else if (ch == 5)
    {
        printf("Max value in array is: %d", max(size, a));
    }
    getch();
}