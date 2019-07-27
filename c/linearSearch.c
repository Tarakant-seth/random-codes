#include<stdio.h>
void main(){
    int n,i,key;
    printf("enter the size of the list : ");
    scanf("%d",&n);
    int list[n];
    for(i=0;i<n;i++){
            printf("\n enter the list value of %d : ",i);
            scanf("%d",&list[i]);
    }
    printf("enter the key elemet you want to search in the list : ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key==list[i]){
            printf("the key was found in %d position\n",i);
        }
    }
}
