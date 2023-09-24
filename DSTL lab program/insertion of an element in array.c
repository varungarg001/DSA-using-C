#include<stdio.h>
void main()
{
    int a[50],n,i,j,k,item;
    printf("enter the no of element in array");
    scanf("%d",&n);
    // traversing of an array
    for(i=0;i<n;i++)
    {
        printf("enter the %d element of the array\n",i+1);
        scanf("%d",&a[i]);
    }
    // before insertion
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("enter the postion you want to enter the item");
    scanf("%d",&k);
    printf("enter the item");
    scanf("%d",&item);
    //j=n;
    //n=n+1;
    if(k<0||k>n+1)
    {
        printf("invalid postion");
    }
    else
    {
    
    for(i=n-1;i>=k-1;i--)
    {
        a[i+1]=a[i];
    }
    a[k-1]=item;
    n++;
    // display array
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    }

}