#include <stdio.h>
#include <string.h>
int main()
{

    char s[100005];    //anytime size maximum 5 or 1 digit big
    scanf("%s", &s); 
    int len = strlen(s);

    int fre [128] = {0};    //ascii value(0-127) [a=97_z=122]

    for (int i = 0; i < len; i++)
    {
        int ascii_val = s[i];
        fre[ascii_val]++;
    }
    for (int f_i = 97; f_i <= 122; f_i++)
    {
        // if (fre[f_i]>0)
        // {
        //     printf("%c - %d\n",f_i,fre[f_i]);
        // }
        //or
        if (fre[f_i]==0)
        {
            continue;
        }
        printf("%c - %d\n",f_i,fre[f_i]);
  
    }
    return 0;
}