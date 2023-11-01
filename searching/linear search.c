#include<stdio.h>
int main()
{
    int a[100],i,n,search,count=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\nEnter the %d element\t",i);
        scanf("%d",&a[i]);
    }
    printf("\nenter the element for searching\t");
    scanf("%d",&search);
    for(i=1;i<=n;i++){
        if(search==a[i]){
            printf("\n%d element is found at %d postion",search,i);
            count++;
            break;
        }
    }
    if(count==0){
        printf("%d element is not found",search);
    }

}