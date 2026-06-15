#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 5000)
    {
        printf("cox's bazar jabo\n");
        if (taka >= 10000)
        {
            printf("saint martin jabo\n");
        }
        else
        {
            printf("farot asbo\n");
        }
    }
    else
    {
        printf("kothao jabo na\n");
    }

    return 0;
}
