#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
unsigned int countLeaf(struct node* node)
    {
      if(node == NULL)
          return 0;
      if(node->left == NULL && node->right==NULL)
          return 1;
      else
          return countLeaf(node->left) + countLeaf(node->right);
    }
struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}

int main()
{
  /*constructing our binary tree
                1
               / \
              2   3
             / \
            4   5   */
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->right->left  = newNode(4);
    root->right->right = newNode(5);
    printf("%d", countLeaf(root));
}
