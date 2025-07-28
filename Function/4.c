#include<stdio.h>
void number(int a){
    if(a > 0){
        printf("The number %d is positive.\n", a);
    } else if(a < 0){
        printf("The number %d is negative.\n", a);
    } else {
        printf("The number is zero.\n");
    }
}
int main (){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    number(a);
    return 0;
}