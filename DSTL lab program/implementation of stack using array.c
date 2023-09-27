#include<stdio.h>
#define n 5
int stack[n];
int top=-1;
 void push()
 {
    int x;
    printf("enter data");
    scanf("%d",&x);
    if(top==4)
    {
        printf("\nstack overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
 }
 void pop()
 {
    int item;
    if(top==-1)
    {
        printf("\nstack underflow");
    }
    else{
        item=stack[top];
        top--;
        printf("\n%d is the popped item\n",item);
    }
 }
 void peek()
 {
    if(top==-1)
    {
        printf("\n stack underflow");
    }
    else{
        printf("%d\n7",stack[top]);
    }
 }
 void display()
 {
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
 }
void main()
{
    int ch;
    do
 {
    printf("press 1 for  push operation\n");
    printf("press 2 for  pop operation\n");
    printf("press 3 for  top operation\n");
    printf("press 4 for  traverse operation\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        peek();
        break;
        case 4:
        display();
        break;
        default:
        printf("invalid choice");

    }
 }while(ch!=0);
    
    
    
    

}