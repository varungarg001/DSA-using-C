#include<stdio.h>
int main()
{
    int a[100],i,n,temp;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the %d element\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("reversing array");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}