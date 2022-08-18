#include <stdio.h>
void pallindrom(char str[])
{
    int length = 0;
    char str2[100];
    for (int i = 0; str[i]; i++)
        str2[i] = str[i];

    for (int i = 0; str[i]; i++)
        length++;
    length--;
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str2[i] = str2[length - i - 1];
        str2[length - i - 1] = temp;
    }
    int check=1;
    for(int i=0;str[i];i++)
    {
        if(str[i]!=str2[i])
        {
            check=0;
            break;
        }
    }
    if(check=1)
        printf("\nThe string is a palindrome ");
    else
        printf("\nThe string is a palindrome ");
}
int main()
{
    char str[100];
    printf("Enter string:");
    fgets(str, 100, stdin);
    pallindrom(str);
    return 0;
}