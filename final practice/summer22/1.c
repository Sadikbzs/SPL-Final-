#include<stdio.h>
struct student {
    char name[20];
    int id;
    float cgpa;  
};
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, id and cgpa for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].id, &students[i].cgpa);
    }
    float max_cgpa = students[0].cgpa;
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].cgpa > max_cgpa) {
            max_cgpa = students[i].cgpa;
            max_index = i;
        }
    }
    printf("Student with highest CGPA:\n");
    printf("Name: %s\n", students[max_index].name);
    printf("ID: %d\n", students[max_index].id);
    printf("CGPA: %.2f\n", students[max_index].cgpa);
    return 0;

}
