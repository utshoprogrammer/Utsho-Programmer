#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)   //for input array value 
    {
        scanf("%d",&a[i]);        //input 
    }
    int x;
    scanf("%d",&x);

    int flag = 0;                //flag variable 

    for (int i = 0; i < n; i++)    //
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] + a[j] == x)     //check array two value equal x
            {
                flag = 1;             //condition true hale flag = 1
                printf("YES\n");       //print yes
                printf("%d %d\n",a[i],a[j]); //value niya print
            }         
        }    
    }
    if (flag == 0)     //condition same thakla print no
    {
        printf("NO\n");
    }
    
    return 0;
}