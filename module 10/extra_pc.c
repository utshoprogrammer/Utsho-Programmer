//problem 1
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1001];
//     scanf("%s", &s);
//     char t[1001];
//     scanf("%s", &t);
//     int size1 = strlen(s);
//     int size2 = strlen(t);

//     printf("%d %d\n",size1,size2);
//     printf("%s %s\n",s,t);

//     return 0;
// }
//problem 2
// #include<stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
    
//     for (int i = 0; i < t; i++)
//     {
//         int w,h;
//         scanf("%d %d",&w,&h); 
//         if(w==h)
//         {
//             printf("Square\n");
//         }
//         else 
//         {
//             printf("Rectangle\n");
//         }   
//     }
//     return 0;
// }
//problem 3
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[100001];
//     scanf("%s", &s);
//     int len = strlen(s);
//     for (int i = 0; i < len; i++)
//     {
//         if(s[i] == ',')
//         {
//             s[i] = ' ';
//         }
//         else if(s[i]>='A'&&s[i]<='Z')
//         {
//             s[i] += 32;
//         }
//         else
//         {
//             s[i] -= 32;
//         }
//     }
//     printf("%s", s);

//     return 0;
// }
//problem 4

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1005];
    scanf("%s", &s);
    int len = strlen(s);

    int flag = 1;

    for (int i = 0,j = len-1; i < j,j > i; i++,j--)
    {
        if (s[i]!=s[j])
        {   
            flag = 0;
            printf("NO");
            break;
        }    
    }
    if (flag == 1)
    {
        printf("YES");
    }  
    return 0;
}