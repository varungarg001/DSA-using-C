#include<stdio.h>
void mergesort(int a[],int p,int r){
    int mid;
    if(p<r){
        mid=(p+r)/2;
        mergesort(a,p,mid);
        mergesort(a,mid+1,r);
        merge(a,p,mid,r);
    }
}
void merge(int a[],int p,int mid,int r){
    int i,j,k;
    int b[r];
    i=p;
    j=mid+1;
    k=p;
    for(int l=p;l<=r;l++){
        while(i<=mid && j<=r){
            if(a[i]<a[j]){
                b[k]=a[i];
                i++;
                k++;

            }
            else{
                b[k]=a[j];
                k++;
                j++;
            }
        }
        if(i>mid){
            while(j<=r){
                b[k]=a[j];
                j++;
                k++;
            }
        }
        else{
            while(i<=mid){
                b[k]=a[i];
                i++;
                k++;
            }
        }
    }
    for(k=p;k<=r;k++){
        a[k]=b[k];
    }
    
}
void main(){
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("\nenter the %d elememt",i+1);
        scanf("%d",&a[i]);
    }
    mergesort(a,0,size-1);
    // print sorted array
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}