#include<stdio.h>
void reverse_string(char str[])
{
    int length=0;
    for(int i=0;str[i];i++)
        length++;
    length--;
    for(int i=0;i<length/2;i++)
    {
        char temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
}
int main()
{
    char str[100];
    printf("Enter string:");
    fgets(str,100,stdin);
    reverse_string(str);
    printf("\nAfter reversing string:\n%s",str);

    return 0;
}