#include<stdio.h>
int main()
{
    int a[100][100],i,j,n;
    printf("enter the number of element present in the matrix");
    scanf("%d",&n);
    printf("enter the elemnets of the matrix ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter the row=%d and column=%d",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    // print the matrix
    for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d",a[i][j]);
    }
}

}