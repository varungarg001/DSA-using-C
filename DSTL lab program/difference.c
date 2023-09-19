#include<stdio.h>
int main()
{
    int a[20],b[15],i,j,k=0;
    // lets take an example both set a and b have 3 elements
    for(i=0;i<3;i++)
    {
        printf("enter the %d element of set a",i+1);
        scanf("\t%d",&a[i]);
    }
    for(j=0;j<3;j++)
    {
        printf("enter the %d elements of set b\n",j+1);
        scanf("\t%d",&b[j]);
    }
    for(i=0;i<3;i++)
    {
        k=0;
        for(j=0;j<3;j++)
        {
            if(a[i]==b[j])
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
        printf("%d\t",a[i]);
        }
    }

}
