#include<stdio.h>
void main(){
    int a[100],i,j,temp,n;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("\n enter the element");
    for(i=0;i<n;i++){
        printf("\n enter the %d element\t",i+1);
        scanf("%d",&a[i]);
    }
    // sorting
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    // sorting result
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
}