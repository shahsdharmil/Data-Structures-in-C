//6.Write a program tofind the maximum value from given array:
#include <stdio.h>
#include <conio.h>
int main()
{
   system("cls");
   printf("\nProgram made by 200420107042\n");
   int a[10], n, max, i;
   printf("Enter how many numbers you want to enter : ");
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      printf("Enter the element %d: ", i + 1);
      scanf("%d", &a[i]);
   }
   max = a[0];
   for (i = 0; i < n; i++)
   {
      if (max < a[i])
      {
         max = a[i];
      }
   }
   printf("Max value in array is: %d", max);
   return (0);
}
