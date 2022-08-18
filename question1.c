#include<stdio.h>
void length_string(char str[])
{
    int count=0;
    for(int i=0;str[i];i++)
        count++;
    count--;
    printf("Length of string is %d",count);
}
int main()
{
    char str[100];
    printf("Enter the string :\n");
    fgets(str,100,stdin);
    length_string(str);
    return 0;
}