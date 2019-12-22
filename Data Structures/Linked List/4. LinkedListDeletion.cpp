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
void deleteNode(int index){
	int i;
	if(head==NULL)
	{
		cout<<"Linked list already empty"<<endl;
	}
	else{
		node *temp = new node;
		if(index == 1)
		{
			temp = head;
			head = head->next;
		}
		else{
			node *last = new node;
			node *prevnode = new node;
			last = head;
			prevnode= head;
		
			for(i=2;i<index;i++)
			{
				prevnode = prevnode->next;
			}
			for(i=1;i<=index;i++)
			{
				temp = last;
				last = last->next;
			}
			prevnode->next = last;
		}

		
		delete temp;
	}
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
	while(var!='n' && head!=NULL)
	{
		cout<<"Enter the index of node you want to delete: ";
		cin>>j;
		deleteNode(j);
		cout<<"Linked List after deletion: ";
		print();
		cout<<"Want to delete more ? (y/n): ";
		cin>>var;
	}
	return 0;
}
