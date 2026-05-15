#include<stdio.h>
#include<string.h>
int main()
{
    char s[105],l[105];
    scanf("%s %s",&s,&l);
    char s2[105],l2[105];
    scanf("%s %s",&s2,&l2);

    int len1 = strlen(l);
    int len2 = strlen(l2);

    if (len1 != len2)
    {
        printf("NOT");
    }
    else 
    {
        if (strcmp(l,l2) == 0)
        {
            printf("ARE Brothers");
        }
        else{
            printf("NOT");
        }
    }
    return 0;
}