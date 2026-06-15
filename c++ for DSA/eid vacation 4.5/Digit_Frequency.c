#include<stdio.h>
#include<string.h>
int main()
{
    char s[10005];
    scanf("%s",&s);
    int len = strlen(s);
    int fre_z = 0,fre_o = 0,fre_t = 0,fre_th = 0,fre_f = 0,fre_fi = 0,fre_s = 0,fre_se = 0,fre_e = 0,fre_n = 0,fre_te = 0;
    for (int i = 0; i < len; i++)
    {
        if(s[i]=='0')
            fre_z++;
        else if(s[i]=='1')
            fre_o++;
        else if(s[i]=='2')
            fre_t++;
        else if(s[i]=='3')
            fre_th++;
        else if(s[i]=='4')
            fre_f++;
        else if(s[i]=='5')
            fre_fi++;
        else if(s[i]=='6')
            fre_s++;
        else if(s[i]=='7')
            fre_se++;
        else if(s[i]=='8')
            fre_e++;
        else if(s[i]=='9')
            fre_n++;
    
    }
    printf("%d %d %d %d %d %d %d %d %d %d",fre_z,fre_o,fre_t,fre_th,fre_f,fre_fi,fre_s,fre_se,fre_e,fre_n);
    
    return 0;
}