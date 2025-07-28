#include<stdio.h>
int getsize(char str[])
{
int  legth = 0;
for (int i = 0; str[i] != '\0'; i++)
{
    legth++;
}
return legth;
}
void removeallduplicates(char str[])
{
    int size = getsize(str);
    for (int i = 0; str[i] != '\0'; i++)
    {

        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                for (int k = j; str[k] !='\0'; k++)
                {
                    str[k] = str[k + 1];
                }
                j--;
            }
        }
    }
      
    }
    void cheackpalindrome(char *str){
        int len=getsize(str);
        int ispalindrome = 1;
        for (int i=-0,j=len-1; i<j; i++,j--)
        {
            

                        if (str[i]!=str[j])
            {
                ispalindrome = 0;
                break;
            }
        }
        if(ispalindrome)
        {
            printf("Palindrome\n");
        }
        else
        {
            printf("Not a Palindrome\n");
        }
    }
    int main(){
char str[100];
printf("Enter a string: ");
gets(str);
removeallduplicates(str);
printf("%s\n", str);
cheackpalindrome(str);
return 0;
    }