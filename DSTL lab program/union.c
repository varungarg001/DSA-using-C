#include<stdio.h>
int main()
{
int set1[20],set2[20],unionset[40],i,j,k=0,m,n,d;
printf("enter the number of element in set1\n");
scanf("%d",&m);
printf("\nenter the elements of set1");
for(i=0;i<m;i++){
    printf("\nenter the %d element",i+1);
    scanf("\n%d",&set1[i]);
}
printf("\nenter the number of elements in set2");
scanf("\n%d",&n);
for(j=0;j<n;j++){
    printf("enter the %d elements of set2\n",j+1);
    scanf("%d",&set2);
}
for(i=0;i<m;i++){
    unionset[i]=set1[i];
}
for(j=0;j<n;j++)
{
    unionset[m+j]=set2[j];
}
d=m+n;
for(i=0;i<d;i++)
{
    k=0;
    for(j=i+1;j<d;j++)
    {
        if(unionset[i]==unionset[j])
        {
            k=1;
            break;
        }
    }
    if(k==0)
    {
        printf("\t%d",unionset[i]);
    }
}


}