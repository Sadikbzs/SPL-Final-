#include<stdio.h>
struct student {
    char name[50];
    int id;
    float cgpa;
};
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student students[n];
    for(int i = 0; i < n; i++) {
        printf("Enter name" ,i+1);
        scanf("%s", students[i].name);
        getchar(); // to consume the newline character
        printf("Enter id of student %d: ", i + 1);
        getchar(); // to consume the newline character
        scanf("%d", &students[i].id);
        getchar(); // to consume the newline character
        printf("Enter CGPA of student %d: ", i + 1);
        getchar(); // to consume the newline character
        scanf("%f", &students[i].cgpa);
    }
 int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(students[i].cgpa > students[maxIndex].cgpa) {
            maxIndex = i;
        }
    }
    printf("Student with highest CGPA:\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("ID: %d\n", students[maxIndex].id);
    printf("CGPA: %.2f\n", students[maxIndex].cgpa);  


   
    return 0;
}
   