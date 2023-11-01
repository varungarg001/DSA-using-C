#include<stdio.h>
int partion(int a[],int p,int r){
    int start,end;
    start=p;
    end=r;
    //int pivot=a[p];
    for(int i=p;i<=r;i++){
        int pivot=a[p];
        while(start<end){
            while(a[start]<=pivot){
                start++;
            }
            while(a[end]>pivot){
                end--;
            }
            if(start<end)
            {
                int temp;
                temp=a[start];
                a[start]=a[end];
                a[end]=temp;
            }
            else{
                int temp=a[p];
                a[p]=a[end];
                a[end]=temp;
            }
        }
        
    }
    return end;

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
    printf("enter the size");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("\nenter the %d element",i+1);
        scanf("%d",&a[i]);

    }
    quick(a,0,size-1);
    // print sorted array
    for(int i=0;i<size;i++){
        printf("\t%d",a[i]);
    }
}