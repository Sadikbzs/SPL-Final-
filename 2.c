#include<stdio.h>
struct Student
{
    char name[200];
    int roll;
    double marks [5];
    double avarage;
};

int main (){
    int choice;
    struct Student students[100];
    int size = 0;
    printf("Student information management system\n");
    printf("1. Add student\n");
    printf("2. Show All Student\n");
    printf("3.find top performer\n");
    printf("4. Show Failed student\n");
    printf("5. Exitt\n");
    while(1){
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1){
            double sum = 0;
            printf("Enter student name: ");
            scanf(" %[^\n]", students[size].name);
            printf("Enter student roll: ");
            scanf("%d", &students[size].roll);
            printf("Enter student marks in 5 subjects: \n");
            for (int i = 0; i < 5; i++) {
                printf("Subject %d: ", i + 1);
                scanf("%lf", &students[size].marks[i]);
                sum += students[size].marks[i];
                }
            students[size].avarage = sum / 5.0;
            printf("Student added successfully!\n");
            size++;
            }
            else if (choice == 2){
                for (int i = 0; i < size; i++) {
                    printf("Name: %s\n", students[i].name);
                    printf("Roll: %d\n", students[i].roll);
                    printf("Marks: ");
                    for (int j = 0; j < 5; j++) {
                        printf("%.2lf ", students[i].marks[j]);
                    }
                    printf("], Avarage: %.2lf\n", students[i].avarage);
                    
                }
            }
            else if (choice == 3){
                double maxAverage = students[0].avarage;
                int mi = 0;
                for (int i = 1; i < size; i++) {
                    if (students[i].avarage > maxAverage) {
                        maxAverage = students[i].avarage;
                        mi = i;
                    }
                }
                printf("Top performer:%s ID:%d ,avarage:%.2lf\n", students[mi].name, students[mi].roll, students[mi].avarage);
            }
            
                else if (choice == 4) {
                for (int i = 0; i < size; i++) {
                    int failcount = 0;
                    for (int j = 0; j < 5; j++) {
                        if (students[i].marks[j] < 40.0) {
                            failcount++;
                        }
                    }
                    if (failcount > 0) {
                        printf("Failed student: %s, Roll: %d, Fail Subjects: %d\n", students[i].name, students[i].roll, failcount);
                    }
                    
                }
        
            }

                else if (choice==5)
                {
                    printf("Exiting the program.\n");
                    return 0;
                }

                

    }

return 0; 
}
    
