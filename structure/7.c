#include<stdio.h>
struct student
{
    char name[20];
    int id;
    float cgpa;
};
int main ()
{
    int n;
    printf("Enter the number of student");
    scanf("%d",&n);
    struct student students[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter the name of student");
            getchar();
        gets(students[i].name);
        getchar();
        printf("Enter id");
        getchar();
        scanf("%d",&students[i].id);
        printf("Enter cgpa");
        getchar();
        scanf("%f",&students[i].cgpa);

    }
    for (int i=0;i<n;i++)
    {
        printf("name of student %s\n",students[i].name);
        printf("Id==%d\n",students[i].id);
        printf("Cgpa==%f\n",students[i].cgpa);


    }
    return 0;
}


