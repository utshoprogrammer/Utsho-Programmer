#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int space1=n-1;
    int star1=1;   
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star1; j++)
        {
            printf("*");
        }
        
        printf("\n");
        space1--;
        star1+=2;
    }

    int star2 = (2*n)-1;
    int space2 = 0;

    for (int i = 1; i <= n; i++)       //for printing lines 
    {
        for (int k = 1; k <= space2; k++)    //for printing space 
        {
            printf(" ");
        }
        for (int k = 1; k <= star2; k++)    //for printing star 
        {
            printf("*");
        }
        printf("\n");
        star2-=2;
        space2++;
        
    }
    
    return 0;
    
}