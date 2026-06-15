#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);  // input n value
    // pattern logic
    int num = 2*5+n;  // mot kato line pajonto print 
    int s = (num +1)/2; // pryamid pattern mot print line 

    // print frist leayer 

    int space1 = s-1;  // space kato thaka start and kato ta end
    int star1 = 1;    // star kot thaka start and kato parjanto print haba
    
    for (int i = 1; i <= s; i++)  //printing lines 
    {
        for (int j = 1; j <= space1; j++) //printting space  
        {
            printf(" ");
        }
        for (int j = 1; j <= star1; j++)  //printting star 
        {
            printf("*");
        }
        printf("\n");   // one bar loop chala new line print 
        space1--;   // space kato bar ba and com ba 
        star1 +=2;   // star kato bar ba and com ba
    }
    // second leayer print
    
    int space = 5; // last leayer space kato thaka start and kato ta end
    int star = n;

    for (int k = num - 5; k < num; k++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}