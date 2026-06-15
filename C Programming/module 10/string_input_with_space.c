#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    fgets(s,16,stdin);
    printf("%s",s);
    return 0;
}