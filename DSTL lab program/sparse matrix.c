#include<stdio.h>
void main()
{
    int a[100][100],i,n,j;
    printf("enter the number of rows and column  matrix have\n");
    scanf("%d",&n);
    // enter the element of the array
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("\nenter the %d row and %d column\n",i+1,j+1);
        scanf("%d",&a[i][j]);
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                continue;
            }
            else
            {
                printf("%d is the row\n",i+1);
                printf("%d is the column\n",j+1);
                printf("%d is the value\n",a[i][j]);

            }
        }
    }
    
}