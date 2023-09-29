#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head=0;
void create()
{
    struct node *newnode,*temp;
    int choice=1;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->link=0;
        printf("enter data\n");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            temp=head=newnode;

        }
        else{
            temp->link=newnode;
            temp=newnode;
        }
        printf("if want more node press 1");
        scanf("%d",&choice);
    }
}
void display()
{
    struct node *temp;
    temp=head;
    if(temp==0)
    {
        printf("linklist is empty");
    } 
    else{   
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->link;
     } } 
    
}
void main()
{
    create();
    display();
}