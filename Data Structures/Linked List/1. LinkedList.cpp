#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next; //It means the pointer next is pointing to Node. That's why pointer is of node type.
};
int main()
{
	Node *head = new Node();
	Node *second = new Node();
	Node *third = new Node();
	
	//Another way of creating a Node
	
	//	Node *head = NULL;
	//	Node *second = NULL;
	//	Node *third = NULL;
	
	//	head = new Node();
	//	second = new Node();
	//	third = new Node();
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	return 0;
	
}
