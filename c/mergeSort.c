#include<stdio.h>
void merge(int list[],int l,int mid, int r){
    int i,j,k;
    int n1 = mid-l+1;
    int n2 = r-mid;
    int L[n1],R[n2];
    for (i = 0; i < n1; i++)
        L[i]=list[l+i];
    for (j = 0; j < n2; j++)
        R[j]=list[mid+1+j];
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2){
        if (L[i]<=R[j]){
            list[k]=L[i];i++;
        }
        else{
            list[k]=R[j];j++;
        }
        k++;
    }
    while (i<n1){
        list[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        list[k]=R[j];
        j++;
        k++;
    }
}

void mergesort(int list[],int l,int r){
    if(l<r){
        int mid = l+(r-l)/2;
        mergesort(list,l,mid);
        mergesort(list,mid+1,r);
        merge(list,l,mid,r);

    }
}
void main(){
    int n,i;
    printf("enter the size of the list : ");
    scanf("%d",&n);
    int list[n];
    for(i=0;i<n;i++){
            printf("\n enter the list value of %d : ",i);
            scanf("%d",&list[i]);
    }
    mergesort(list,0,n-1);
    printf("\n\tsorted array is : ");
    for (i = 0; i < n; i++){
        printf("%d ",list[i]);
    }
    printf("\n\n\n");
}