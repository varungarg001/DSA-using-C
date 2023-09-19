#include<stdio.h>
int main()
{
    int set1[20],set2[20],i,j,n,m;
    printf("enter the number of elements in set1\t");
    scanf("%d",&m);
    printf("enter the elements of set1\n");
    for(i=0;i<m;i++)
    {
        printf("enter the %d element of set1\t",i+1);
        scanf("%d",&set1[i]);
    }
    printf("\nenter the number of elements of set2");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        printf("enter the %d elements of set2\t",j+1);
        scanf("%d",&set2[j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(set1[i]==set2[j])
            {
                printf("%d\t",set1[i]);
            }
        }
    }
}