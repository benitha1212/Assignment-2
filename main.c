#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Students
{
int std_number;
char reg_number[20];
char std_fname[30];
char std_lname[30];
char course[50];
char year_of_study[10];
};

int main()
{
struct Students *Student;
int i, number;

printf("Input the number of students: ");
scanf("%d",&number);
printf("\n");

Student = (struct Students*) malloc(2 * sizeof(struct Students));

for(i = 1; i <= number; i++)
{
    printf("Student %d \n",i);
    printf("\n");

    printf("Input your student number:");
    scanf("%d",&(Student + i)->std_number);
    //printf("\n");

    printf("Input your registration number:");
    scanf("%s",&(Student + i)->reg_number);
    //printf("\n");

    printf("Input your first name:");
    scanf("%s",&(Student + i)->std_fname);
    //printf("\n");

    printf("Input your last number:");
    scanf("%s",&(Student + i)->std_lname);
    //printf("\n");

    printf("Input your course:");
    scanf("%s",&(Student + i)->course);
    //printf("\n");

    printf("Input your year of study:");
    scanf("%s",&(Student + i)->year_of_study);
    printf("\n");

    printf("\n");

}

printf("Information Display for the students\n");
printf("\n");


for (i = 1; i <= number; i++)
    printf("Student number:%d\nRegistration number:%s\nStudent first name:%s\nStudent last name:%s\nStudent course:%s\nStudent Year of study:%s\n\n",(Student + i)->std_number,(Student + i)->reg_number,(Student + i)->std_fname,(Student + i)->std_lname,(Student + i)->course,(Student + i)->year_of_study);

    return 0;
}
