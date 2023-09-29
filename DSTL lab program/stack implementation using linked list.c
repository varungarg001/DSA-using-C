#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top;
void push()
{
    int x,choice=1;
    while(choice==1)
    {
    printf("enter data\n");
    scanf("%d",&x);
    struct node *newnode;
    newnode=(struct  node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    printf("want more node in stack press 1\n");
    scanf("%d",&choice);
    }
}
void display()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("stack is empty");
    
    }
    else{
        while(temp!=0)
        {
         printf("%d\t",temp->data);
         temp=temp->next;
        }

    }
}
void peek()
{
    if(top==0)
    {
        printf("stack is empty");
    }
    else
    {
        printf("\ntop element before pop is");
        printf("\t%d\n",top->data);
    }
}
void pop()
{
    struct node *temp,*nextnode;
    temp=nextnode=top;
    if(top==0)
    {
        printf("stack is empty");
    }
    else
    {
        printf("\n%d is the poped element",top->data);
        top=top->next;
        free(temp);
    }
}
void peekafterpop()
{
    if(top==0){
        printf("stack is empty");
    }
    else{
        printf("\npeek after pop is");

     printf("%d",top->data);
    }
}
void displayafterpop()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("stack is empty");
    }
    else{
        printf("stack after pop");
        while(temp!=0)
        {
            
            printf("\t%d",temp->data);
            temp=temp->next;
        }
    }

}
    

void main()
{
    push();
    display();
    peek();
    pop();
    peekafterpop();
    displayafterpop();

  
}