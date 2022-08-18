#include <stdio.h>
void compare(char str[], char str2[])
{
    int len1 = length_string(str), len2 = length_string(str2);
    if (len1 == len2)
    {

        for (int i = 0; i < len1; i++)
        {
            if (str[i] != str2[i])
            {
                printf("\nStrings are not equal");
                return;
            }
        }
        printf("\nStrings are equal");
    }
    else
        printf("\nStrings are not equal");
}
int length_string(char str[])
{
    int count = 0;
    for (int i = 0; str[i]; i++)
        count++;
    count--;
    return count;
}
int main()
{
    char str[100], str2[100];
    printf("Enter first string:");
    fgets(str, 100, stdin);
    printf("Enter second string:");
    fgets(str2, 100, stdin);
    compare(str, str2);

    return 0;
}