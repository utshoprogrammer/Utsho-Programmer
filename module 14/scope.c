// #include<stdio.h>

// int a = 10;   //global variable ja puro program a kaj kora sum and main function thaka print kora jay

// int sum()      
// {         
//     printf("sum -> %d\n",a);    
// }
// int main()
// {
//     printf("main -> %d\n",a);   
//     sum();  
//     return 0;
// }

// #include<stdio.h>
   
// int sum()      
// { 
//     int a = 10;          //ai variable sudue sum function ar modda kaj korba
//     printf("sum -> %d\n",a); 
//     printf("main -> %d\n",b);   //akhana b variable decelear nai tai error
// }
// int main()
// {
//     int b = 20;
//     printf("main -> %d\n",a);   ////akhana a variable decelear nai tai error
//     printf("main -> %d\n",b);
//     sum();  
//     return 0;
// }

#include<stdio.h>
   
int sum()      
{ 
    int a = 10;          //ai variable sudue sum function ar modda kaj korba
    printf("sum -> %d\n",a); 
    // printf("main -> %d\n",b);   //akhana b variable decelear nai tai error
}
int main()
{
    int b = 20;
    // printf("sum -> %d\n",a);   ////akhana a variable decelear nai tai error
    printf("main -> %d\n",b);
    sum();  
    return 0;
}