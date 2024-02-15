#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a &b");
    scanf("%d%d", &a,&b);
    c=a;
    a=b;
    b=c;

printf("a=%d",a);
printf("b=%d",b);
return 0;
}