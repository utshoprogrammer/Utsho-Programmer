//problem 1
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char x[21],y[21];
//     scanf("%s\n",&x);
//     scanf("%s\n",&y);
//     int i =0;
//     while(1)
//     {
//         if (x[i]=='\0'&&y[i]=='\0')
//         {
//             printf("%s",x);
//             break;
//         }
//         else if (x[i]=='\0')
//         {
//             printf("%s",x);
//             break;
//         }
//         else if (y[i]=='\0')
//         {
//             printf("%s",y);
//             break;
//         }
//         else if (x[i]<y[i])
//         {
//             printf("%s",x);
//             break;
//         }
//         else if (x[i]>y[i])
//         {
//             printf("%s",y);
//             break;
//         }
//         else
//         {
//             i++;
//         }  
//     }
    
//     return 0;
// }
//problem 2
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char x[21],y[21];
//     scanf("%s\n",&x);
//     scanf("%s\n",&y);

//     int val = strcmp(x,y);
//     if (val < 0)
//     {
//         printf("%s",x);
//     }
//     else if (val > 0)
//     {
//         printf("%s",y);
//     }
//     else if (val == 0)
//     {
//         printf("%s",x);
//     }
//     return 0;
// }
//problem 3
#include<stdio.h>
#include<string.h>
int main()
{
    char x[21],y[21];
    scanf("%s",&x);
    scanf("%s",&y);

    int len = strlen(y);

    for (int i = 0; i <= len; i++)
    {
        x[i] = y[i];
    }
    printf("%s %s",x, y);
    
    return 0;
}