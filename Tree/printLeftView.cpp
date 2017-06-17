#include<bits/stdc++.h>
using namespace std;

int max_level = -1;

struct node {
	int data;
	node *left;
	node *right;
};

node * newNode(int data) {
	node *createdNode = new node;
	createdNode -> data = data;
	createdNode -> left = NULL;
	createdNode -> right = NULL;
	return createdNode;
}

void printLeftView(node *root, int level) {	
	if(level > max_level)
	{
		max_level = level;
		cout<<root->data<<"\n";
	}
	
	if(root -> left != NULL) {
		printLeftView(root -> left, level + 1);
	}
	if(root -> right != NULL) {
		printLeftView(root -> right, level + 1);
	}
}

int main() {
	/*node *root = newNode(1);
	root -> left = newNode(2);
	root -> right = newNode(3);
	root -> right -> right = newNode(4);*/
	
	node *root = newNode(12);
    root->left = newNode(10);
    root->right = newNode(30);
    root->right->left = newNode(25);
    root->right->right = newNode(40);
    
	printLeftView(root, 0);
	return 0;
}
