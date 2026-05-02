#include<stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 100)
    {
        printf("burger khabo \n");
    }
    else if (taka >= 50)
    {
        printf("fuchka khabo \n");
    }
    else if (taka >= 30)
    {
        printf("chips khabo \n");
    }
    else
    {
        printf("khabo na \n");
    }

    return 0;
}