#include<bits/stdc++.h>
using namespace std;

class node{
	public:	
		int data;
		node *next;
}*head = NULL;
void add(int val)
{
	node *last = head;
	node *temp = new node;
	temp->data = val;
	temp->next = NULL;
	
	if(head == NULL)
	{
		head = temp;
		return;
	}
	while(last->next !=NULL)
		last= last->next;
	last->next = temp;
}
print()
{
	if(head==NULL)
	{
		cout<<"EMPTY";
	}
	else{
		node *temp = new node;
		temp = head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->next;
		}
	}
	cout<<"\n";
}
void length(){
	int count = 0;
	if(head == 0)
	{
		count = 0;
		cout<<"The number of nodes in the linked list is: "<<count;
	}
	else if(head->next == NULL){
		count = 1;
		cout<<"The number of nodes in the linked list is: "<<count;
	}
	else{
		do{
			head = head->next;
			count++;
		}while(head->next != NULL);
	
	cout<<"The number of nodes in the linked list is: "<<(1 + count);
	}
}

int main()
{
	int i,j;
	char var = 'y';
	for(i=1;i<11;i++)
	{
		add(2*i);
	}
	cout<<"Created Linked List is: ";
	print();
	length();
	
	return 0;
}
