#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1005];
    scanf("%s",s1);
    int len = strlen(s1);

    char s2[1005];
    scanf("%s",s2);
    int len2 = strlen(s2);

    int start ,end;
    scanf("%d %d",&start,&end);

    for (int i = 0; i < len; i++)
    {
        printf("%c",s1[i]);
    }
    for (int i = start; i <= end && i < len2; i++)
    {
        printf("%c",s2[i]);
    }
    
    return 0;
}