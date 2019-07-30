#include<stdio.h>
int stack[100],n,choice,top,x,i;

void push(){
    if(top>=n-1){
        printf("\n\t Stack is over flow");
    }
    else
    {
        printf("\n\tenter a value to be pushed ");
        scanf("%d",&x);
        top++;
        stack[top]=x;

    }
}
void pop(){
    if(top<=-1){
        printf("\n\t Stack is underflow");
    }
    else{
        printf("\n\t the popped elements is %d ", stack[top]);
        top--;
    }
}
void display(){
    if(top>=0){
        printf("\n the elements in stack \n");
        for(i=top;i>=0;i--)
            printf("\n\t%d",stack[i]);
        printf("\n press next choice");
    }
    else{
        printf("\n the stack is empty");
    }
    
}

void main(){
    top =-1;
    printf("\n\t Enter the size of stack <100 :");
    scanf("%d",&n);
    printf("\n\t 1.push \n\t 2.pop\n\t 3.display \n\t 4.exit");
    do {
        printf("\n\tenter the choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
         case 2:
        {
            pop();
            break;
        } 
        case 3:
        {
            display();
            break;
        }
        case 4:
            {
                printf("\n\t bye bye ");
                break;
            }
        default:
            printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }

    }
    while (choice != 4);
}