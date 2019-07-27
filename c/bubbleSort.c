#include<stdio.h>
void main()
{
    int n,i,j,temp;
    printf("enter the size of the list : ");
    scanf("%d",&n);
    int list[n];
    for(i=0;i<n;i++)
    {
            printf("\n enter the list value of %d : ",i);
            scanf("%d",&list[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(list[j]>list[j+1]){
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;

            }
        }
    }
    printf("\n\t\t the sorted list is ");
    for(i=0;i<n;i++)
        printf(" %d ",list[i]);
    printf("\n\n");
}