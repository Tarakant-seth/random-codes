#include<stdio.h>
int front=-1,rear=-1,n,queue[100];

void entQueue(){
    int el;
    if(rear>=n-1){
        printf("queue is full");
    }
    else
    {
        if(front == -1)
            front =0;
        printf("\n\t enter the element : ");
        scanf("%d",&el);
        rear++;
        queue[rear]=el;
    }

}
void delQueue(){
    if(front==-1){
        printf("queue is empty");
    }
    else{
        printf("the element %d is deleted",queue[front]);
        front++;
        n++;
    }

}
void displayQueue(){
    int i;
    if(rear==-1){
        printf("the queue is empty");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d ",queue[i]);
        }
    }
    
}

void main(){
    int choice;
    printf("\n\tenter the size of queue : \n\t");
    scanf("%d",&n);
    queue[n];
    printf("\n\t 1.Entry \n\t 2.delete \n\t 3.Display \n\t 4.exit");
    do{
        printf("\n\n\t enter the choices : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        {
            entQueue();
            break;
        }
        case 2:
        {
            delQueue();
            break;
        }case 3:
        {
            displayQueue();
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