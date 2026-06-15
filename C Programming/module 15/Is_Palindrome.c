#include <stdio.h>
#include <string.h>

int is_palindrome(char s[],int len)
{
    int ans = 1;
    for (int i = 0,j= len-1; i < j; i++,j--) // i < j time run loop
    {
        if (s[i] != s[j])
        {
            ans = 0;
            break;
        }       
    }   
    return ans;
    
}
int main()
{
    char s[1005];
    scanf("%s", s);
    int len = strlen(s);
    
    int ans = is_palindrome(s,len);
    
    if (ans == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}