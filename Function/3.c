#include<stdio.h>
void oddoreven(int a){
    if(a % 2 == 0){
        printf("The number %d is even.\n", a);
    } else {
        printf("The number %d is odd.\n", a);
    }
}
int main (){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    oddoreven(a);
    return 0;
}