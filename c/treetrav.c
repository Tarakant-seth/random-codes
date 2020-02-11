#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=NULL,*temp=NULL,*current,*parent;

void insert(int key)
{
    temp = malloc(sizeof(struct node));
    temp->data = key;
    temp->left = NULL;
    temp->right = NULL;


    if(root== NULL)
        root = temp;
    else
    {
        current = root;
        while(1)
        {
            parent = current;
            if(key < parent->data)
            {
                current = current->left;
            
                if(current == NULL)
                {
                    parent->left = temp;
                    return;
                }
            }
            else
            {
                current = current->right;
                if(current == NULL)
                {
                    parent->right = temp;
                    return;
                }
            }
        }
    }   
}

void preorder(struct node* root)
{
    if(root!=NULL)
    {
        printf(" %d ",root->data);
        preorder(root->left);
        preorder(root->right);

    }
}
void postorder(struct node* root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf(" %d ",root->data);

    }
}
void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);

    }
}
void search(int key)
{
    current = root;
    while(current->data != key){
        if(key<current->data){
            current = current->left;
        }
        else
        {
            current= current->right;
        }
        if(current == NULL){
            printf("data %d doesnot exist in tree",key);
            return;
        }
    }
    if(current->data == key){
            printf("%d exists in tree\n\n",key);
        }
}

void main()
{
    int i;
    int arr[7] = {27, 14, 35, 10, 19, 31, 42};
    for (i = 0; i < 7; i++)
    {
        insert(arr[i]);
    }
    printf("preorder : ");
    preorder(root);
    printf("\npostorder : ");
    postorder(root);
    printf("\ninorder : ");
    inorder(root);
    printf("\n\n");
    search(1);



}