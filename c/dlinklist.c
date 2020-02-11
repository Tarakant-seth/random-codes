#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*start=NULL,*end=NULL,*temp=NULL,*t;
int count=0;
void insert()
{
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("\nenter data : ");
    scanf("%d",&num);
    t->data = num;
    
    if (start== NULL)
    {   
        end=t;
    }
    else
    {
        start->prev=t;
    }
    t->next=start;
    start=t;count++;
}

/*void delete_end(){
    if(start->next==NULL){
        start=NULL;
    }
    else
    {
        end->prev->next=NULL;
    }
    end=end->prev;  
} */
void delete(){
    int l,c=1;
    printf("\n enter the pos to del :");
    scanf("%d",&l);
    if(l<=count)
    {
        temp=start;
        t=NULL;
        if(start==NULL)
        {
            printf("the list is empty");
            return;
        }
        while (c!=l)
        {
            if(temp->next==NULL){
                printf("nothing");
            }
            else{
                t=temp;
                temp=temp->next;
            }
            c++;
        }
        if(temp==start){
            start=start->next;
        }
        else
        {
            temp->prev->next=temp->next;
        }
        if(temp==end){
            end=temp->prev;
        }
        else{
            temp->next->prev = temp->prev;
        }
        count--;
    }
    else
    {
        printf("invalid key");
        printf("%d",count);
    }
    
}
void display(){
    temp=start;
   while (temp!=NULL)
   {
       printf("- %d ",temp->data);
       temp=temp->next;
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