#include<stdio.h>
int ack(int m,int n);
int main()
{
   int m,n,a;
   printf("enter the value of m\n");
   scanf("%d",&m);
   printf("enter the value of n");
   scanf("%d",&n);
   a=ack(m,n);
   printf("%d",a);
 
}
int ack(int m,int n){
    if(m==0){
        return n+1;
    }
    else if(n==0){
        return ack(m-1,1);
    }
    else{
        return ack(m-1,ack(m,n-1));
    }
}