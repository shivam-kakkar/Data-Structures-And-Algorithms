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
bool searchElement(int e){
	node *current = new node;
	current = head;
	while(current!=NULL)
	{
		if(current->data == e)
			return true;
		current = current->next;
	}
	return false;
}

int main()
{
	int i,j;
	char var = 'y';
	for(i=1;i<11;i++)
	{
		add(i);
	}
	cout<<"Created Linked List is: ";
	print();
	while(var!='n')
	{
		cout<<"Type the element you want to search in the linked list: ";
		cin>>j;
		searchElement(j)? cout<<"Yes, it is present in the linked list\n" : cout<<"No, it is not present in the linked list\n";
		cout<<"Do you want to search any other element ? (y/n): ";
		cin>>var;
	}

	return 0;
}
