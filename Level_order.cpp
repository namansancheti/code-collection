#include<bits/stdc++.h>
using namespace std;

struct node 
{
	int data;
	node *left, *right;	
}

void printGivenLevel(node *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }	
}

int height(node* node)
{
	if(node == NULL)
	{
		return 0;
	}
	
	else 
	{
		int lheight = height(node->left);
		int rheight = height(node->right);
		
		return max(lheight, rheight);
	}
}

void printLevelOrder(node *root)
{
	int h = height(root);
	int i;
	for(i=1; i<=h;
	
}

void printGivenLevel(node *root, int level)
{
	
}

struct node* newNode(int data)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return(node);
}

int main()
{
	struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    
    printf("Level Order traversal of binary tree is \n");
    printLevelOrder(root);
	
	return 0;
}
