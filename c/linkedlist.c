#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL,*q,*t;

void insert()
{
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("\nenter data : ");
    scanf("%d",&num);
    t->data = num;
    
    if (start== NULL)
    {
        t->next = NULL;
        start =t;
    }
    else
    {
        t->next=start;
        start=t;
    }
}

void delete()
{
    if (start==NULL)
    {
        printf("list is empty");
    }
    else
    {
        q=start;
        printf("the deleted data is %d",q->data);
        start=start->next;
        free(q);
    }
}
void display(){
    if(start==NULL){
        printf("list is empty");
    }
    else
    {
        q=start;
        printf("\nthe linked list is : ");
        printf("\n *[%d]",start);
        while (q!=NULL)
        {
            printf(" - ['%d'|%d]",q->data,q->next);
            q=q->next;
        }
        printf(" - NULL\n");
        
    }
    
}
void main(){
    int choice;
    printf("\n\t 1.Insert \n\t 2.Delete \n\t 3.Display \n\t 4.exit");
    do{
        printf("\n\t enter the choices : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        {
            insert();
            break;
        }
        case 2:
        {
            delete();
            break;
        }case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\n\tbye bye \n\n");
            break;
        }
        default:
            printf("\n\t Please Enter a Valid Choice(1/2/3/4)");
            break;
        }

    }while(choice!=4);
}