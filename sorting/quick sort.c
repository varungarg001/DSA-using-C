#include<stdio.h>
int partion(int a[],int p,int r){
    int pivot,temp,i,j;
    pivot=a[r];
    i=p-1;
    for(j=p;j<=r;j++){
        if(a[j]<pivot){
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int k;
    k=a[i+1];
    a[i+1]=a[r];
    a[r]=k;
    return(i+1);



}
void quick(int a[],int p,int r){
    int q;
    if(p<r){
        q=partion(a,p,r);
        quick(a,p,q-1);
        quick(a,q+1,r);

    }
    
}
void main(){
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("\nenter the %d element",i+1);
        scanf("%d",&a[i]);

    }
    quick(a,0,size-1);
    // print sorted array
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}