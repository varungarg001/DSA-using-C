#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head,*newnode,*temp;
    int choice=1;
    head=0;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->prev=0;
        newnode->next=0;
        printf("enter data");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            temp=head=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("enter 1 if you want more nodes");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}