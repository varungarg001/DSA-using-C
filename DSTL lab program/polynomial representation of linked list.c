#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int coeff;
        int exp;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
    head=0;
    int choice=1;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        printf("enter coefficient\n");
        scanf("%d",&newnode->coeff);
        printf("\nenter expontial of the coefficient");
        scanf("%d",&newnode->exp);
        if(head==0)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("\n if you want more node press 1\n");
        scanf("%d",&choice);
    }
    temp=head;
   while(temp!=0)
   {
    printf("coffecient part is %d of expontial part %d\n",temp->coeff,temp->exp);
    temp=temp->next;
   }
    
}