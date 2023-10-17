#include<stdio.h>
int TOH(int n,int a,int b,int c);
int main()
{
    int n,a,b,c,d;
    printf("enter the number of element in stacks ");
    scanf("%d",&n);
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    printf("the sequence is\n");
    TOH(n,a,b,c);
    return 0;

}
int TOH(int n,int a,int b,int c){
    if(n>0)
    {
        TOH(n-1,a,c,b);
        printf("%d move from to %d",a,c);
        printf("\n");
        TOH(n-1,b,a,c);
    }
}