#include<stdio.h>
void main()
{
    int a[50],i,num,pos,n;
    printf("enter the number of element in an array");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the %d element of the array",i);
        scanf("%d",&a[i]);
    }
    // array before deletion
    for(i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nenter the postion you want to perform deletion");
    scanf("%d",&pos);
    if(pos<0||pos>n+1)
    {
        printf("invalid postion");    
    }
    else
    {
        for(i=pos+1;i<=n;i++)
        {
            a[i-1]=a[i];

        }
        n=n-1;
        for(i=1;i<=n;i++)
        {
            printf("%d",a[i]);
        }
    }


}
