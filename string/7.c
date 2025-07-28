//wap to convert a string to uppercase without using strupr function
#include <stdio.h>
int main (){
char str[1000];
int i;
printf("Enter a string: "); 
gets(str);
// Convert each character to uppercase
for (i = 0; str[i] != '\0'; i++) {
    // Check if the character is a lowercase letter
    if (str[i] >= 'a' && str[i] <= 'z') {
        // Convert to uppercase by subtracting 32 from its ASCII value
        str[i] = str[i] - 32;
    }
    
}
printf("Uppercase string: %s\n", str);
return 0;
}