
#include<iostream>
using namespace std;

//Defining each node of the tree
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};

//Find the minimum in tree
Node* FindMin(Node* root)
{
	while(root->left != NULL)  //since smaller values are stored in the left side so we traverse the left
    {
	root = root->left;
    }
	return root;
}

//Recursive Function to delete a node if it exists
Node* Delete(Node *root, int data) {
	if(root == NULL)
	return root;
	else if(data < root->data)
	root->left = Delete(root->left,data);
	else if (data > root->data)
	root->right = Delete(root->right,data);

	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) {
			delete root;
			root = NULL;
		}
		//Case 2: One child
		else if(root->left == NULL) {
			Node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			Node *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else {
			Node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}

//Display the tree in Inorder traversal
void Inorder(Node *root) {
	if(root == NULL) return;

	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}

// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else
		root->right = Insert(root->right,data);
	return root;
}

int main() {

	Node* root = NULL;
	int n,i,j;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter the data: ";
	cin>>j;
	root = Insert(root,j);
	for(i=1;i<n;i++)
	{
	    cout<<"Enter the data: ";
        cin>>j;
        Insert(root,j);

	}

	cout<<"\n Initial tree inorder traversal: ";
	Inorder(root);

	cout<<"\n\nEnter the data to delete: ";
	cin>>j;
	root = Delete(root,j);


	cout<<"\n Tree after deleting: ";
	Inorder(root);
	cout<<"\n";
}
