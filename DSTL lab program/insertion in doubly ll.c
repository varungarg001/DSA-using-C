#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *prev;
        struct node *next;
    };
    struct node *head,*newnode,*temp,*addnode;
    int choice=1,count=0,pos,i=1;;
    head=0;
    while(choice==1)
    {   count++;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        newnode->prev=0;
        printf("enter data\n");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            temp=head=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("if you want more node press 1");
        scanf("%d",&choice);

    }
    // list before insertion
    temp=head;
    printf("list before insertion\n");
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    // insertion
    addnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&addnode->data);
    addnode->next=0;
    addnode->prev=0;
    printf("enter the postion you want to perform insertion");
    scanf("%d",&pos);
    if(count<pos)
    {
        printf("invalid postion");
    }
    else
    {
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        addnode->next=temp->next;
        addnode->prev=temp;
        temp->next=addnode;
        addnode->next->prev=addnode;
        
    }
    temp=head;
    printf("\n list after insertion");
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }


}