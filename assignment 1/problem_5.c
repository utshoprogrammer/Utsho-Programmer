#include<stdio.h>
int main() 
{
    long long int N;
    scanf("%lld", &N);
    if(N>1000)
    {
        printf("I will buy Punjabi\n");
        
        if(N-1000>=500)
        {
            printf("I will buy new shoes\n");         
        }
        if(N-1000>=500)
        {
            printf("Alisa will buy new shoes");
        }
    }
    else
        {
            printf("Bad luck!");
        }
  
    return 0;
}