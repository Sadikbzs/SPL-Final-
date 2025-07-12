//wap to toggle case of a string without using strlwr and strupr functions
#include<stdio.h>
int main (){
char str[1000];
int i;
printf("Enter a string: ");
gets(str);
// Toggle case for each character
for (i = 0; str[i] != '\0'; i++) {
    // Check if the character is uppercase
    if (str[i] >= 'A' && str[i] <= 'Z') {
        // Convert to lowercase by adding 32 to its ASCII value
        str[i] = str[i] + 32;
    } 
    // Check if the character is lowercase
    else if (str[i] >= 'a' && str[i] <= 'z') {
        // Convert to uppercase by subtracting 32 from its ASCII value
        str[i] = str[i] - 32;
    }
}
printf("Toggled case string: %s\n", str);
return 0;
}