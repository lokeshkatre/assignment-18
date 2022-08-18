#include<stdio.h>
void lowerCase(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] <= 90 && str[i] >= 65)
            str[i] += 32;
    }
}
int main()
{
    char str[100];
    printf("Enter String :\n");
    fgets(str, 100, stdin);
    lowerCase(str);
    printf("\n\n%s",str);
    return 0;
}