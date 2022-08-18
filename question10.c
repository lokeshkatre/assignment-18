#include<stdio.h>
#include<string.h>
void duplicateChar(char str[])
{
    int arr[strlen(str)];
    for(int i=0;i<strlen(str);i++)
        arr[i]=0;
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=i+1;j<strlen(str);j++)
        {
            if(str[i]==str[j])
            {
                if(arr[j]!=-1)
                {
                    arr[i]++;
                    arr[j]=-1;
                }
            }
        }
    }
    printf("Duplicate elements are:\n");
    for(int i=0;i<strlen(str);i++)
    {
        if(arr[i]>=1)
        printf("%c ",str[i]);
    }
}

int main()
{
    char str[40];
    printf("Enter string:\n");
    fgets(str,40,stdin);
    duplicateChar(str);
    
    return 0;
}