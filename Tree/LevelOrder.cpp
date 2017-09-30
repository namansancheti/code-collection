#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *left;
	node *right;
};

queue<struct node *> q;

void printLevelOrder(node *root)
{
	if(root == NULL)
		return;
		
	//q.push(root);
	
	if(root -> left != NULL)
		q.push(root -> left);
	
	if(root -> right != NULL)
		q.push(root -> right);
		
	printLevelOrder(root -> left);
	printLevelOrder(root -> right);
}

node * newNode(int data)
{
	struct node *node = new struct node;
	node -> data = data;
	node -> left = NULL;
	node -> right = NULL;
	
	return node;
};

int main()
{
	node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    
	q.push(root);
	printLevelOrder(root);
	
	while(!q.empty())
	{
		cout<<q.front()->data<<" ";
		q.pop();
	}
	
	return 0;
}
