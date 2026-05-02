#include<stdio.h>
#include<string.h>
int main()
{
    char s[100005];
    scanf("%s",s);
    int len_s = strlen(s);

    int count_con = 0;

    for (int i = 0; i < len_s; i++)
    {
        if (s[i]=='a')
        {
            continue;
        }
        else if (s[i]=='e')
        {
            continue;
        }
        else if (s[i]=='i')
        {
            continue;
        }
        else if (s[i]=='o')
        {
            continue;
        }
        else if (s[i]=='u')
        {
            continue;
        }
        else
        {
            count_con++;
        }     
    }
    printf("%d",count_con);
    
    return 0;
}