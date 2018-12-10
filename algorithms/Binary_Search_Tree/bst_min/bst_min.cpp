#include<iostream>
using namespace std;

struct b_node
{
    int data;
    b_node * left;
    b_node * right;

};
b_node * root;

//inserting a node to the tree
b_node * insert_node(b_node * root,int i)
{
    b_node * temp= new b_node;
    temp->data=i;
    temp->left=NULL;
    temp->right=NULL;

    if(root==NULL)
    {
        root=temp;
    }

    else if(i<=root->data)
    {
        root->left=insert_node(root->left,i);
    }
    else
    {
        root->right=insert_node(root->right,i);

    }
    return root;
}

//function to find minimum of the tree
int find_min(b_node * root)
{
    if(root==NULL)
    {
    return -1;
    }
    else
    {
        while(root->left!=NULL)
        {
        root=root->left;
        }
    }
    return root->data;

}
int main()
{
    int n,j,m;
    root=NULL;
    cout<<"\n Enter the number of nodes: ";
    cin>>n;
        for(int i=1;i<=n;i++)
        {
            cout<<"\nEnter data: ";
            cin>>j;
            root=insert_node(root,j);
        }

    m=find_min(root);
    cout<<"\nMinimum is: "<<m;
    return 0;



}
