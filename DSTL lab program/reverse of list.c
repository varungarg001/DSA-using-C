#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*currentnode,*prevnode,*nextnode,*temp;
    head=0;
    int choice=1;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        printf("enter data\n");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            temp=head=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("\nadd more press 1");
        scanf("%d",&choice);

    }
    // list before reversing
    printf("\n list befor reversing");
    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    // reversing process
    prevnode=0;
    currentnode=nextnode=head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;

    }
    head=prevnode;
    // list after reversing process
    printf("\nlist after reversing\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}