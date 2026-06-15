#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);  //input test case 

    for (int i = 0; i < t; i++)   //test case porjanto loop 
    {
        int n;
        scanf("%d", &n);  //input array size 
        int a[n];
        for (int i = 0; i < n; i++) //array element input 
        {
            scanf("%d", &a[i]);
        }
        // a[n] copy to b[n] a kore b array taraki

        int b[n];     //n size array b input 

        for (int i = 0; i < n; i++)   
        {
            b[i] = a[i];      //copy array element from a to b
        }

        // sorting array element 

        for (int i = 0; i < n - 1; i++)   //loop start b array 0 indx to < n
        {
            for (int j = i + 1; j < n; j++) //loop start b array i+1 indx to < n
            {
                if (b[i] > b[j])    //condition for sorting small to big element form b array
                {
                    int temp = b[i]; // b[i] = b[j] and b[i] = b[i] rakhi
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
        // array a[i] - b[i] k c[i] taraki

        int c[n];  //input c array
        for (int i = 0; i < n; i++)
        {
            c[i] = abs(a[i] - b[i]);  //a[i] - b[i] ar abs value 
        }
        for (int i = 0; i < n; i++) //print the c array 
        {
            printf("%d ",c[i]);
        }
        printf("\n");  // print new line for mentain sereal
        
    }

    return 0;
}