#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include <sstream>
using namespace std;

struct node{
	int x;
	struct node *left;
	struct node *right;
};

struct node* newbana(int y){

	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->x = y;
	newnode->left = NULL;
	newnode->right = NULL;
	
	return newnode;

}

struct node* arrtoBST(int a[],int l,int r)
{
	
	//Base Case
	if(l>r)
		return NULL;
	int mid =(l+r)/2;
	struct node* newno = newbana(a[mid]);

	newno->left = arrtoBST(a,l,mid-1);
	newno->right = arrtoBST(a,mid+1,r);

	return newno;

}

void preorder(struct node* root)
{
	if(root==NULL)
	return;
	cout << root->x << " ";
	preorder(root->left);
	preorder(root->right);
}


int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	struct node *root = arrtoBST(a,0,7);
	cout << "Preorder Traversal of BST\n";
	preorder(root);
	cout << endl;
	
	return 0;
}