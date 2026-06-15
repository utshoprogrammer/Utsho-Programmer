#include<stdio.h>

void hello()
{
    printf("Hello\n");
    hello();  //infinit loop para jabe
}
int main()
{
    printf("Hi\n");
    hello();
    return 0;
}