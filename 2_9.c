//9. Define a structure called STUDENT that would contain name, roll_no and marks of three subjects m1,m2,m3. 
//Using this structure, write a program to read this information for one student from the key board and print the same on the screen.
#include <stdio.h>
#include <conio.h>
struct Student
{
    int rollno;
    char name[50];
    int intmarks1, intmarks2,intmarks3;
}; 

void main()
{
    struct Student st1;
    system("cls");
    printf("\nAuthor : 200420107042");
    printf("\nEnter details of the Student");
    printf("\nEnter Name of the Student : ");
    scanf("%s", st1.name);
    printf("\nRoll no : ");
    scanf("%d", &st1.rollno);
    printf("\nMarks : ");
    printf("\nSubject 1 : ");
    scanf("%d", &st1.intmarks1);
    printf("\nSubject 2 : ");
    scanf("%d", &st1.intmarks2);
    printf("\nSubject 3 : ");
    scanf("%d", &st1.intmarks3);
    printf("\n******************************Student details***************************");
    printf("\nName : %s",st1.name);
    printf("\nRoll No : %d", st1.rollno);
    printf("\n******************************Student marks*******************************");
    printf("\nMarks of Subject 1 : %d", st1.intmarks1);
    printf("\nMarks of Subject 2 : %d", st1.intmarks2);
    printf("\nMarks of Subject 3 : %d", st1.intmarks3);

    return(0);
}