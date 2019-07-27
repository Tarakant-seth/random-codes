#include<stdio.h>
void main()
{
    int n,i,key;
    printf("enter the size of the list : ");
    scanf("%d",&n);
    int list[n];
    for(i=0;i<n;i++)
    {
            printf("\n enter the list value of %d : ",i);
            scanf("%d",&list[i]);
    }
    printf("\n enter the key elemet you want to search in the list : ");
    scanf("%d",&key);
    int l=0,h=n,m;
    m= (h+l)/2;
    while(l<=h){
        if(list[m]>key){
            h=m-1;
        }
        if(list[m]<key){
            l=m+1;
        }
        if(key == list[m])
        {
            /* code */
            printf("\t\nkey found at %d \n\n",m);
            break;
        }
        m = (h+l)/2;
        if(l>h){
            printf("key not found\n");
        }

    }
}