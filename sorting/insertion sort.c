#include<stdio.h>
void main(){
    int a[100],temp,n,i,j;
    printf("enter the number of elemnets");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n enter the %d element",i+1);
        scanf("%d",&a[i]);
    }
    // sorting
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    // print sorting
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
}