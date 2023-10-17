#include<stdio.h>
void main()
{
    int n,m,sum=0,num;
    printf("enter number");
    scanf("%d",&n);
    m=n;
    while (n!=0)
    {
        num=n%10;
        sum=sum+num*num*num;
        n=n/10;
    }
    if(m==sum)
    {
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
}