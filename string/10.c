#include<stdio.h>
int main (){
    char s[1000];
    gets(s);
    int last=0;
    int palindrome;
    palindrome = 1; // Assume it is a palindrome initially
    for (int i=0;s[i]; i++){
        last++;
    }
    int j;
for (int i=0,j=last-1; i< j ; i++, j--){
        if (s[i] != s[j]){
            palindrome = 0;
            break;
        }
    }

if (palindrome) printf("The string is a palindrome.\n");
    else printf("The string is not a palindrome.\n");
    return 0;
}