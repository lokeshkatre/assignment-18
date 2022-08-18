#include <stdio.h>
void alphanumeric(char str[])
{
    int alpha = 0, num = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
            num++;
        else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
            alpha++;
    }
    if (alpha != 0 && num != 0)
        printf("\nThe string is alphanumeric");
    else
        printf("\nThe string is not alphanumeric");
}
int main()
{
    char str[100];
    printf("Enter String :\n");
    fgets(str, 100, stdin);
    alphanumeric(str);
    return 0;
}