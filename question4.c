#include<stdio.h>
void UpperCase(char str[])
{
     for (int i = 0; str[i]; i++)
    {
        if (str[i] <= 122 && str[i] >= 97)
            str[i] -= 32;
    }
}
int main()
{
    char str[100];
    printf("Enter String :\n");
    fgets(str, 100, stdin);
    UpperCase(str);
    printf("\n\n%s", str);
    return 0;
}