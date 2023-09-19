#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp,*hello;
    int choice=1,count=0,pos,i=1;
    head=0;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        count++;
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
            
        }
        printf("if you want more node then enter 1\n");
        scanf("%d",&choice);

    }    
        printf("enter the position after you want to insert the element");
        scanf("%d",&pos);
        if(pos>count)
        {
            printf("invalid position");
        }
        else
        {
            temp=head;
            while(i<pos)
            {
                temp=temp->next;
                i++;
            }
            hello=(struct node*)malloc(sizeof(struct node));
            printf("enter data");
            scanf("%d",&hello->data);
            hello->next=temp->next;
            temp->next=hello;

        
        temp=head;
        printf("\nlink list after insertion\n");
        while(temp!=0)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
        }


    
}
