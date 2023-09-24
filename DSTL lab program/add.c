#include<stdio.h>
void sum()
{
    int a,b,sum;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d\n",sum);
}
void main()
{
    sum();
    sum();
}