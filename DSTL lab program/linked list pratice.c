#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *next,*temp,*head,*newnode;
    int choice=1;
    head=0;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        printf("enter the data in list");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("if you want add more node press 1");
        scanf("%d",&choice);
    }
    // traversing
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}