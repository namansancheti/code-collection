#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	
	int data;	
	Node *next;
	
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}

};

void printNode(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
}

void removeDups(Node *head)
{
	Node *node = head;
	set<int> s;
	Node *prev = NULL;

	while(node != NULL)
	{
		if(s.find(node->data) != s.end())
		{
			prev->next = node->next;
		}
		
		else 
		{
			s.insert(node->data);
			prev = node;
		}
		node = node -> next;
	}
	
}

int main()
{
	//set<int> s;
	Node *head = new Node(21);
	head->next = new Node(23);
	head->next->next = new Node(23);
	head->next->next->next = new Node(25);

	printNode(head);
	cout<<"\n";
	removeDups(head);
	printNode(head);

	return 0;

}
