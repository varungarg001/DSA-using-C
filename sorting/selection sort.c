#include<stdio.h>
void main(){
    int a[100],i,j,n,s,temp;
    printf("enter the number of element");
    scanf("%d",&n);
    printf("\n enter the elememts");
    for(i=0;i<n;i++){
        printf("\n enter the %d element",i+1);
        scanf("%d",&a[i]);
    }
    // sorting
    for(i=0;i<n-1;i++){
        s=i;
        for(j=i+1;j<=n;j++){
            if(a[j]<a[s]){
                s=j;
            }
        }
        temp=a[i];
        a[i]=a[s];
        a[s]=temp;


    }
    // sorting result
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
    

}