// problem 1
//  #include<stdio.h>
//  #include<string.h>
//  int main()
//  {
//      char x[25],y[25];
//      scanf("%s %s",&x,&y);
//      int len_x = strlen(x);
//      int len_y = strlen(y);
//      if (len_x < len_y)
//      {
//          printf("%s",x);
//      }
//      else if (len_x > len_y)
//      {
//          printf("%s",y);
//      }
//      return 0;
//  }
//  //problem 2
//  #include<stdio.h>
//  int main()
//  {
//      int n,m;
//      scanf("%d %d",&n,&m);
//      int arr[n];
//      for (int i = 1; i <= n; i++)
//      {
//          scanf("%d",&arr[i]);
//      }
//      int fre[100005] = {0};
//      for (int i = 1; i <= n; i++)
//      {
//          int val = arr[i];
//          fre[val]++;
//      }
//      for (int i = 1; i <= m; i++)
//      {
//          printf("%d\n",fre[i]);
//      }

//     return 0;
// }
////problem 3
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", &s);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += s[i] - '0'; // char ka int ta convert '0'(assi value) - kora
    }
    printf("%d", sum);

    return 0;
}
////problem 4
// #include<stdio.h>
// int main()
// {
//     char s[1000000000000000005];
//     scanf("%s",&s);

//     return 0;
// }
// problem 5
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[55], t[55];
        scanf("%s %s", &s, &t);

        int len_s = strlen(s);
        int len_t = strlen(t);
        int i;
        
        for (i = 0; i < len_s && i < len_t; i++)
        {
            printf("%c%c", s[i], t[i]);
        }
        if (i < len_s)
        {
            for ( ; i < len_s; i++)
            {
                printf("%c",s[i]);
            }   
        }
        if (i < len_t)
        {
            for ( ; i < len_t; i++)
            {
                printf("%c",t[i]);
            }   
        }
        printf("\n");
    }
    return 0;
}