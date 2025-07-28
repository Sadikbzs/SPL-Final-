#include<stdio.h>
struct student
{
    char name[50];
    int age;
    float total_mark;
};
int main ()
{
    struct student student1,student2;
    printf("ENTER 1ST STUDENT NAME");
    gets(student1.name);
    printf("ENTER 1ST STUDENT AGE");
    scanf("%d",&student1.age);
    printf("ENTER 1ST STUDENT TOTAL MARK");
    scanf("%f",&student1.total_mark);
    getchar();

    printf("ENTER 2ND STUDENT NAME");
    gets(student2.name);
    printf("ENTER 2ND STUDENT AGE");
    scanf("%d",&student2.age);
    printf("ENTER 2ND STUDENT TOTAL MARK");
    scanf("%f",&student2.total_mark);


    printf("1st students Information\n");
    puts(student1.name);
    printf("age=%d\n",student1.age);
    printf("total mark =%f\n",student1.total_mark);


    printf("2nd students Information\n");
    puts(student2.name);
    printf("age=%d\n",student2.age);
    printf("total mark =%f\n",student2.total_mark);



    float avg=(student1.total_mark+student2.total_mark)/2;

    printf("The avg mark is %f",avg);



return 0;
}






