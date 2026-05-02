#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        char s[10005];
        scanf("%s", s);
        int len = strlen(s);

        int count_captail = 0;
        int count_small = 0;
        int count_digit = 0;

        for (int i = 0; i < len; i++)
        {
            if (s[i]<='z' && s[i]>='a')
            {
                count_small++;
            }
            else if (s[i]>='A'&&s[i]<='Z')
            {
                count_captail++;
            }
            else if (s[i]>='0'&&s[i]<='9')
            {
                count_digit++;
            }
        }
        printf("%d %d %d\n",count_captail,count_small,count_digit) ;    
    }
    return 0;
}