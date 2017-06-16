#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next;
};

Node *head;

Node * newNode(int data) {
	Node *createdNode = new Node;
	createdNode -> data = data;
	createdNode -> next = NULL;
	return createdNode;
}

void printLL() {
	Node *current = head;
	while(current != NULL) {
		cout<<current -> data<<" ";
		current = current -> next;
	}
	cout<<"\n";
}

void reverseLL() {
	Node *prev = NULL;
	Node *current = head;
	Node *next = NULL;
	
	while(current != NULL) {
		next = current -> next;
		current -> next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

int main() 
{
	head = new Node;
	head -> next = newNode(1);
	head -> next -> next = newNode(2);
	head -> next -> next -> next = newNode(3);
	head -> next -> next -> next -> next = newNode(4);
	printLL();
	reverseLL();
	printLL();
	return 0;
}
