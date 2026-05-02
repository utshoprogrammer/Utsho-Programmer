#include<stdio.h>
#include<string.h>
int main()
{
    
    char f1[105],s1[105];
    scanf("%s %s",f1, s1);
    char f2[105],s2[104];
    scanf("%s %s",f2,s2);
    
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2)
    {
        printf("NOT");
    }
    else
    {
        if (strcmp(s1,s2) == 0)
        
            printf("ARE Brothers");
        
        else
        
            printf("NOT");
        
    }
    
    return 0;
}