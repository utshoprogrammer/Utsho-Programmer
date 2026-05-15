#include<stdio.h>

int rec(char s[],int i)
{
    if (s[i]=='\0')
    {
        return 0;
    }
    int count = rec(s,i+1);
    return count +1;
}
int main()
{
    char s[202];
    fgets(s,202,stdin);
    int len = rec(s,0);
    printf("%d",len);
    return 0;
}