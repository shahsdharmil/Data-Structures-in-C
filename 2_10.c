#include <stdio.h>
#include <conio.h>
#include <string.h>

struct STUDENT
{
    char name[25];
    int roll_no;
    int m1, m2, m3;
} s[20];

int n;
void result(struct STUDENT s[], int n);
void result_rollno(struct STUDENT s[], int n, int x);
void result_name(struct STUDENT s[], int n, char y[]);
void high_per(struct STUDENT s[], int n);
void display(struct STUDENT s[], int n);

void main()
{
    system("cls");
    int i, x, ch;
    char y[25];
    printf("\n DHARMIL SHAH - 200420107042 \n");
    printf("\n Enter the Number of Students you want to store the data : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n STUDENT : %d", i + 1);
        printf("\n Enter the Name of the Student : ");
        scanf("%s", s[i].name);
        printf(" Enter the Roll No of the Student : ");
        scanf("%d", &s[i].roll_no);
        printf("\n Enter marks of Student for 3 subjects out of 70!");
        printf("\n Enter the Marks of M1 : ");
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

    printf("\n**********************************************************");
    printf("\n Enter 1 to display result of each student. (Pass/Fail) : ");
    printf("\n Enter 2 to display result of student by rollno you want to see. : ");
    printf("\n Enter 3 to display result of student by name you want to see. : ");
    printf("\n Enter 4 to display information of student who secures highest percentage. : ");
    printf("\n Enter 5 to display information of all the student. : ");
    printf("\n Enter 6 to exit. : ");
    printf("\n**********************************************************\n");
    scanf("%d", &ch);

    while (ch != 6)
    {
        switch (ch)
        {
        case 1:
            result(s, n);
            printf("\n**********************************************************");
            printf("\n Enter 1 to display result of each student. (Pass/Fail) : ");
            printf("\n Enter 2 to display result of student by rollno you want to see. : ");
            printf("\n Enter 3 to display result of student by name you want to see. : ");
            printf("\n Enter 4 to display information of student who secures highest percentage. : ");
            printf("\n Enter 5 to display information of all the student. : ");
            printf("\n Enter 6 to exit. : ");

            printf("\n**********************************************************\n");
            scanf("%d", &ch);
            break;
        case 2:
            result_rollno(s, n, x);
            printf("\n**********************************************************");
            printf("\n Enter 1 to display result of each student. (Pass/Fail) : ");
            printf("\n Enter 2 to display result of student by rollno you want to see. : ");
            printf("\n Enter 3 to display result of student by name you want to see. : ");
            printf("\n Enter 4 to display information of student who secures highest percentage. : ");
            printf("\n Enter 5 to display information of all the student. : ");
            printf("\n Enter 6 to exit. : ");

            printf("\n**********************************************************\n");
            scanf("%d", &ch);
            break;
        case 3:
            result_name(s, n, y);
            printf("\n**********************************************************");
            printf("\n Enter 1 to display result of each student. (Pass/Fail) : ");
            printf("\n Enter 2 to display result of student by rollno you want to see. : ");
            printf("\n Enter 3 to display result of student by name you want to see. : ");
            printf("\n Enter 4 to display information of student who secures highest percentage. : ");
            printf("\n Enter 5 to display information of all the student. : ");
            printf("\n Enter 6 to exit. : ");

            printf("\n**********************************************************\n");
            scanf("%d", &ch);
            break;
        case 4:
            high_per(s, n);
            printf("\n**********************************************************");
            printf("\n Enter 1 to display result of each student. (Pass/Fail) : ");
            printf("\n Enter 2 to display result of student by rollno you want to see. : ");
            printf("\n Enter 3 to display result of student by name you want to see. : ");
            printf("\n Enter 4 to display information of student who secures highest percentage. : ");
            printf("\n Enter 5 to display information of all the student. : ");
            printf("\n Enter 6 to exit. : ");

            printf("\n**********************************************************\n");
            scanf("%d", &ch);
            break;
        case 5:
            display(s, n);
            printf("\n**********************************************************");
            printf("\n Enter 1 to display result of each student. (Pass/Fail) : ");
            printf("\n Enter 2 to display result of student by rollno you want to see. : ");
            printf("\n Enter 3 to display result of student by name you want to see. : ");
            printf("\n Enter 4 to display information of student who secures highest percentage. : ");
            printf("\n Enter 5 to display information of all the student. : ");
            printf("\n Enter 6 to exit. : ");

            printf("\n**********************************************************\n");
            scanf("%d", &ch);
            break;
        default:
            printf("\n Please Enter value between 1 and 5 only!!");
            printf("\n**********************************************************");
            printf("\n Enter 1 to display result of each student. (Pass/Fail) : ");
            printf("\n Enter 2 to display result of student by rollno you want to see. : ");
            printf("\n Enter 3 to display result of student by name you want to see. : ");
            printf("\n Enter 4 to display information of student who secures highest percentage. : ");
            printf("\n Enter 5 to display information of all the student. : ");
            printf("\n Enter 6 to exit the programm. : ");

            printf("\n**********************************************************\n");
            scanf("%d", &ch);
            break;
        }
    }

    if (ch == 6)
    {
        printf("\n**********************************************************\n");
        printf("You have exited the programm.");
        printf("\n**********************************************************\n");
    }
}

void result(struct STUDENT s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n**********************************************");
        printf("\n Roll No : %d Name : %s", s[i].roll_no, s[i].name);
        if (s[i].m1 >= 23)
        {
            printf("\n Marks1 = %d \t Pass!", s[i].m1);
        }
        else
        {
            printf("\n Marks1 = %d \t Fail!", s[i].m1);
        }
        if (s[i].m2 >= 23)
        {
            printf("\n Marks2 = %d \t Pass!", s[i].m2);
        }
        else
        {
            printf("\n Marks2 = %d \t Fail!", s[i].m2);
        }
        if (s[i].m3 >= 23)
        {
            printf("\n Marks3 = %d \t Pass!", s[i].m3);
        }
        else
        {
            printf("\n Marks3 = %d \t Fail!", s[i].m3);
        }
    }
}

void result_rollno(struct STUDENT s[], int n, int x)
{
    int i, count = 0;
    printf("\n Please Enter the Roll No of the Student you want to see the Marks : ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (x == s[i].roll_no)
        {
            printf("\n Roll No : %d Name : %s", s[i].roll_no, s[i].name);
            printf("\n Marks1 = %d", s[i].m1);
            printf("\n Marks2 = %d", s[i].m2);
            printf("\n Marks3 = %d", s[i].m3);
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("\n The Roll No %d is not found !!", x);
    }
}

void result_name(struct STUDENT s[], int n, char y[])
{
    int i, a, count = 0;
    printf("\n Enter the Name of the student you want to see the Marks : ");
    scanf("%s", y);
    for (i = 0; i < n; i++)
    {
        a = strcmp(s[i].name, y);
        if (a == 0)
        {
            printf("\n Roll No : %d Name : %s", s[i].roll_no, s[i].name);
            printf("\n Marks1 = %d", s[i].m1);
            printf("\n Marks2 = %d", s[i].m2);
            printf("\n Marks3 = %d", s[i].m3);
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("\n The Student Name %s does not found !!", y);
    }
}

void high_per(struct STUDENT s[], int n)
{
    int i, j;
    float total, per, max = 0.0;
    for (i = 0; i < n; i++)
    {
        total = (s[i].m1 + s[i].m2 + s[i].m3);
        if (total > max)
        {
            max = total;
            j = i;
        }
    }
    per = (max * 100) / 210;
    printf("\n %s Scored Maximum Percentage of %.2f in the class!! \n", s[j].name, per);
}

void display(struct STUDENT s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n***********************************");
        printf("\n Name : %s", s[i].name);
        printf("\n Roll No : %d", s[i].roll_no);
        printf("\n Marks of M1 : %d", s[i].m1);
        printf("\n Marks of M2 : %d", s[i].m2);
        printf("\n Marks of M3 : %d", s[i].m3);
        printf("\n***********************************");
        printf("\n");
    }
}
