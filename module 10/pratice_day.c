// problem 1
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int i = 0;
//     int j = n-1;
//     while (i<j)
//     {
//         int tamp = a[i];
//         a[i] = a[j];
//         a[j] = tamp;
//         i++;
//         j--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }
// problem 2
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int i = 0;
//     int j = n-1;
//     while(i<j)
//     {
//         if (a[i]!=a[j])
//         {
//             printf("NO");
//             return 0;
//         }
//         i++;
//         j--;
        
//     }
//     printf("YES");

//     return 0;
// }
//problem 3
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     for (int i = 0; i < t; i++)
//     {
//         char s[105];
//         scanf("%s",&s);
//         int len = strlen(s);
//         if (len>10)
//         {
//             printf("%c%d%c\n",s[0],len-2,s[len-1]);
//         }
//         else 
//         {
//             printf("%s\n",s);
//         }     
//     }
//     return 0;
// }
//problem 4
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[100005];
//     scanf("%s", &s);
//     int len = strlen(s);
//     for (int i = 0; i < len; i++)
//     {
//         if (s[i] == ',')
//         {
//             s[i] = ' ';
//         }
//         else if (s[i]>='A'&&s[i]<='Z')
//         {
//             s[i] += 32;
//         }
//         else
//         {
//             s[i] -= 32;
//         } 
//     }
//     printf("%s",s);
//     return 0;
// }
//problem 5
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1005];
//     scanf("%s",&s);
//     int len = strlen(s);
//     int flag = 1;
//     for (int i = 0,j=len-1; i < len,j>=0; i++,j--)
//     {
//         if (s[i]!=s[j])
//         {
            
//             flag = 0;
//             printf("NO");
//             break;
//         }
        
//     }
//     if (flag == 1)
//     {
//         printf("YES");
//     }
//     return 0;
// }
//problem 6
#include<stdio.h>
#include<string.h>
int main()
{
    char s[15],t[15];
    scanf("%s %s",&s,&t);
    int len_s = strlen(s);
    int len_t = strlen(t);
    printf("%d %d\n",len_s,len_t);
    printf("%s%s\n",s,t);

    char temp = s[0];
    s[0] = t[0];
    t[0] = temp;
    printf("%s %s\n",s,t);
    return 0;
}