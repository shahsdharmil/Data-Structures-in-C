/* 11. For the above structure of student, design a program to enter information of N number of students and then create following functions: 
1. void search1(struct student[], int n, int x) :
To search student whose rollno=x and to display information within the function only. Whole array of student information and number of students are passed as argument.
2. struct student search2(struct student[], int n, int x): 
To search student whose rollno=x and to return that particular record to the calling function. Then calling function will display information of this student. Whole array of student information and number of students are passed as argument.
3. struct student* search3(struct student[], int n, int x):
To search student whose rollno=x and to return pointer to that particular record to the calling function. Then calling function will display information of this student. Whole array of student information and number of students are passed as argument.
4. void sort(struct student[], int n) :
To sort entire list of student in ascending order as per roll number.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct STUDENT
{
    char name[25];
    int roll_no;
    int m1, m2, m3;
} s[20];
int n;
void search1(struct STUDENT s[], int n, int x);
struct STUDENT search2(struct STUDENT s[], int n, int x);

struct STUDENT *search3(struct STUDENT s[], int n, int x);
void display(struct STUDENT s[], int n);
void sort(struct STUDENT s[], int n);
void main()
{
    system("cls");
    int i, x, ch;
    char y[25];
    struct STUDENT st, s1;
    struct STUDENT *s2;
    st.roll_no = -1;
    printf("\n Dharmil Shah - 200420107042 \n");
    printf("\n Enter the Number of Students you want to store there data : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n STUDENT : %d", i + 1);
        printf("\n Enter the Name of the Student : ");
        scanf("%s", s[i].name);
        printf(" Enter the Roll No of the Student : ");
        scanf("%d", &s[i].roll_no);
        printf("\n Enter marks of Student for 3 subjects out of 70!");
        printf("\n Enter the Marks of Marks1 : ");
        scanf("%d", &s[i].m1);
        entermarks:
        if (s[i].m1 > 70 || s[i].m1 < 0)
        {
            printf("\n %d Marks is invalid !! ", s[i].m1);
            printf("\n Enter marks between 0 to 70 ");
            printf("\n Reenter the marks ");
            scanf("%d", &s[i].m1);
            goto entermarks;
        }
        printf("\n Enter the Marks of M2 : ");
        scanf("%d", &s[i].m2);
    entermarks2:
        if (s[i].m2 > 70 || s[i].m2 < 0)
        {
            printf("\n %d Marks is invalid !! ", s[i].m2);
            printf("\n Enter marks between 0 to 70 ");
            printf("\n Reenter the marks ");
            scanf("%d", &s[i].m2);
            goto entermarks2;
        }
        printf("\n Enter the Marks of M3 : ");
        scanf("%d", &s[i].m3);
    entermarks3:
        if (s[i].m3 > 70 || s[i].m3 < 0)
        {
            printf("\n %d Marks is invalid !! ", s[i].m3);
            printf("\n Enter marks between 0 to 70 ");
            printf("\n Reenter the marks ");
            scanf("%d", &s[i].m3);
            goto entermarks3;
        }
    }
    printf("\n***************************************************************************************************************");
    printf("\n Enter 1 to search student whose rollno you want to search and to display information within the function only.");
    printf("\n Enter 2 to search student whose rollno you want to search and to return that particular record to the calling function.");
    printf("\n Enter 3 to search student whose rollno you want to search using pointer");
    printf("\n Enter 4 to sort entire list of student in ascending order as per roll number.");
    printf("\n Enter 5 to exit. : ");
    printf("\n***************************************************************************************************************\n");
    scanf("%d", &ch);

    while (ch != 5)
    {
        switch (ch)
        {
        case 1:
            search1(s, n, x);
            printf("\n***************************************************************************************************************");
            printf("\n Enter 1 to search student whose rollno you want to search and to display information within the function only.");
            printf("\n Enter 2 to search student whose rollno you want to search and to return that particular record to the calling function.");
            printf("\n Enter 3 to search student whose rollno you want to search using pointer");
            printf("\n Enter 4 to sort entire list of student in ascending order as per roll number.");
            printf("\n Enter 5 to exit. : ");
            printf("\n***************************************************************************************************************\n");
            scanf("%d", &ch);
            break;
        case 2:
            s1 = search2(s, n, x);
            if (st.roll_no != 0)
            {
                printf("\n Roll No : %d Name : %s", s1.roll_no, s1.name);
                printf("\n M1 = %d", s1.m1);
                printf("\n M2 = %d", s1.m2);
                printf("\n M3 = %d", s1.m3);
            }
            else
            {
                printf("\n The Roll No %d does not found !!", s1.roll_no);
            }
            printf("\n***************************************************************************************************************");
            printf("\n Enter 1 to search student whose rollno you want to search and to display information within the function only.");
            printf("\n Enter 2 to search student whose rollno you want to search and to return that particular record to the calling function.");
            printf("\n Enter 3 to search student whose rollno you want to search using pointer");
            printf("\n Enter 4 to sort entire list of student in ascending order as per roll number.");
            printf("\n Enter 5 to exit. : ");
            printf("\n***************************************************************************************************************\n");
            scanf("%d", &ch);
            break;
        case 3:
            s2 = search3(s, n, x);
            if (s2->roll_no != -1)
            {
                printf("\n Roll No : %d Name : %s", s2->roll_no, s2->name);
                printf("\n M1 = %d", s2->m1);
                printf("\n M2 = %d", s2->m2);
                printf("\n M3 = %d", s2->m3);
            }
            else
            {
                printf("\n The Roll No %d does not found !!", s2->roll_no);
            }
            printf("\n***************************************************************************************************************");
            printf("\n Enter 1 to search student whose rollno you want to search and to display information within the function only.");
            printf("\n Enter 2 to search student whose rollno you want to search and to return that particular record to the calling function.");
            printf("\n Enter 3 to search student whose rollno you want to search using pointer");
            printf("\n Enter 4 to sort entire list of student in ascending order as per roll number.");
            printf("\n Enter 5 to exit. : ");
            printf("\n***************************************************************************************************************\n");
            scanf("%d", &ch);
            break;
        case 4:
            sort(s, n);
            display(s, n);
            printf("\n***************************************************************************************************************");
            printf("\n Enter 1 to search student whose rollno you want to search and to display information within the function only.");
            printf("\n Enter 2 to search student whose rollno you want to search and to return that particular record to the calling function.");
            printf("\n Enter 3 to search student whose rollno you want to search using pointer");
            printf("\n Enter 4 to sort entire list of student in ascending order as per roll number.");
            printf("\n Enter 5 to exit. : ");
            printf("\n***************************************************************************************************************\n");
            scanf("%d", &ch);
            break;
        default:
            printf("\nPlease enter valid choice ");
            printf("\n***************************************************************************************************************");
            printf("\n Enter 1 to search student whose rollno you want to search and to display information within the function only.");
            printf("\n Enter 2 to search student whose rollno you want to search and to return that particular record to the calling function.");
            printf("\n Enter 3 to search student whose rollno you want to search using pointer");
            printf("\n Enter 4 to sort entire list of student in ascending order as per roll number.");
            printf("\n Enter 5 to exit. : ");
            printf("\n***************************************************************************************************************\n");
            scanf("%d", &ch);
            break;
        }
    }
    if (ch == 5)
    {
        printf("\n**********************************************************\n");
        printf("You have exited the programm.");
        printf("\n**********************************************************\n");
    }
}

void search1(struct STUDENT s[], int n, int x)
{
    int i, count = 0;
    printf("\n Please Enter the Roll No of the student you want to see the Marks : ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (s[i].roll_no == x)
        {
            printf("\n Roll No : %d Name : %s", s[i].roll_no, s[i].name);
            printf("\n M1 = %d", s[i].m1);
            printf("\n M2 = %d", s[i].m2);
            printf("\n M3 = %d", s[i].m3);
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("\n The Roll No %d does not found !!", x);
    }
}
struct STUDENT search2(struct STUDENT s[], int n, int x)
{
    int i;
    struct STUDENT st;
    st.roll_no = -1;
    printf("\n Please Enter the Roll No of the student you want to see the Marks : ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (s[i].roll_no == x)
        {
            st = s[i];
            break;
        }
    }
    return st;
}
struct STUDENT *search3(struct STUDENT s[], int n, int x)
{
    int i;
    int flag = -1;
    printf("\n Please Enter the Roll No of the student you want to see the Marks : ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (s[i].roll_no == x)
        {
            flag = i;
            break;
        }
    }
    return &s[flag];
}
void display(struct STUDENT s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n***********************************");
        printf("\n Name of the student : %s", s[i].name);
        printf("\n Roll No : %d", s[i].roll_no);
        printf("\n***********************************");
        printf("\n Marks of Marks1 : %d", s[i].m1);
        printf("\n Marks of Marks2 : %d", s[i].m2);
        printf("\n Marks of Marks3 : %d", s[i].m3);
        printf("\n***********************************");
        printf("\n");
    }
}
void sort(struct STUDENT s[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].roll_no > s[j].roll_no)
            {
                struct STUDENT temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}