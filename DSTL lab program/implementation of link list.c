#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
    int choice=1;
    head=0;
    while(choice==1)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data");   
        scanf("%d",&newnode->data);
        newnode->next=0;
        if (head==0)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("\ndo you want to continue?\n" );
        printf("for continue=1\n stop=0\n");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    





}