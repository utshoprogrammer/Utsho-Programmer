#include<stdio.h>
int main()
{
    int a;
    long long int b;
    char s[105];
    float c;
    double d;
    scanf("%d %lld %s %f %lf",&a, &b, &s, &c, &d);
    printf("%d\n%lld\n%s\n%.2f\n%.1lf\n",a, b, s, c, d);
    return 0;
}