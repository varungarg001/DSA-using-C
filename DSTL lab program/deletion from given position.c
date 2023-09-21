#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp,*nextnode;
    int choice=1,i=1,pos;
    head=0;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        printf("enter data");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;

        }
        printf("if you want more node then press 1 or or then press 0");
        scanf("%d",&choice);
    }
    // list before deletion
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("at what position you want operates deletion operation");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
    // list after deletion
    temp=head;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    


}