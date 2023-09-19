#include<stdio.h>
void main()
{
    int a[100],k,i,n;

    printf("enter the number of elements present in array");
    scanf("%d",&n);

    printf("enter the element of array a");
    //traversing
    for( i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the number of the elements you want to find");
    scanf("%d",&k);
    
    

        for(i=1;i<=n;i++)
        {
            if(i==k)
            {
                printf("%d",a[i]);
                break;
            }
        }

    }