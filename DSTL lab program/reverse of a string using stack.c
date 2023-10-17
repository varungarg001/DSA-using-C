#include<stdio.h>
int top=0;
char a[100];
void push()
{
    int i,n;
    printf("enter the number of words in the string\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\nenter the %d element of the string\t",i);
        scanf("%s",&a[i]);
        top++;

        
    }
    


}
void reverse(){
    int i;
    //printf("hello");
    for(i=top;i>0;i--){
        printf("%c\t",a[i]);
    }
}
void main(){
    push();
    reverse();
}