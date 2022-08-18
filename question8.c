#include <stdio.h>
#include <string.h>
void WordCount(char str[])
{
    int wordCount = 0;

    for (int i = 0; i < strlen(str) - 1; i++)
    {
       
        if (str[i] == ' ' && isalpha(str[i + 1]) && (i > 0))
        {
            wordCount++;
        }
    }
    wordCount++;
    printf("Total number of words in the given string: %d", wordCount);
}

int main()
{
    char str[100];
    printf("Enter string:");
    fgets(str, 100, stdin);
    WordCount(str);
    return 0;
}