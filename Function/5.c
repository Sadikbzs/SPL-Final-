#include<stdio.h>
void numbergreater(int a, int b){
    if(a > b){
        printf("The number %d is greater than %d.\n", a, b);
    } else if(a < b){
        printf("The number %d is less than %d.\n", a, b);
    } else {
        printf("Both numbers are equal.\n");
    }
}
int main (){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    numbergreater(a, b);
    return 0;
}