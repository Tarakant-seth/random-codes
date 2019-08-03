#include<stdio.h>
int choice,n,x,*i;
int *pos,*p1,stack[100];
void push(){
    if(p1==(pos+n)){
        printf("\n\t Stack is over flow");
    }
    else
    {
        printf("\n\tenter a value to be pushed ");
        //printf("\n\t %d %x\n",n,pos);
        scanf("%d",&x); 
        p1++;    
        *p1 = x;
    }
}
void pop(){
    if(p1==pos){
        printf("\n\t Stack is underflow");
    }
    else{
        printf("\n\t the popped elements is %d ",*p1);
        p1--;
    }
}
void display(){
    if(p1>=pos){
        printf("\n the elements in stack \n");
        for(i=p1;i>pos;i--)
            printf("\n\t%d",*i);
        printf("\n press next choice");
    }
    else{
        printf("\n the stack is empty");
    }
}
void main(){
    pos = stack;
    p1 = stack;
    printf("\n\t Enter the size of stack <=100 :");
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