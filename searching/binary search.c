#include<stdio.h>
void main()
{
    int a[100],i,n,search,beg,end,mid,count=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("\nenter the sorted elements of the array");
    for(i=0;i<n;i++){
        printf("\nenter the %d elements of the array\t",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the searching element");
    scanf("%d",&search);
    beg=0;
    end=n-1;
    while(beg<=end){
        mid=(beg+end)/2;
        if(a[mid]==search){
            printf("\n%d element is found at %d postion",search,i+1);
            count++;
            break;
        }
        else if(a[mid]<search){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(count==0){
        printf("\n%d is not found",search);
    }
}    