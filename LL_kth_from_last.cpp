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

void printLL(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	return;
}

void printKthFromLast(Node *head, int k)
{
	Node *p1 = head;
	Node *p2 = head;
	
	for(int i = 1; i <= k; i++)
	{
		p2 = p2 -> next;
	}
	
	while(p2 != NULL)
	{
		p2 = p2 -> next;
		p1 = p1 -> next;
	}
	
	cout<<p1->data;
	return;
}

int main()
{
	//set<int> s;
	Node *head = new Node(21);
	head->next = new Node(22);
	head->next->next = new Node(23);
	head->next->next->next = new Node(24);

	printLL(head);
	cout<<"\n";	
	
	printKthFromLast(head,1);

	return 0;

}
