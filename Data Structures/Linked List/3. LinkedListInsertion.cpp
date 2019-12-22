#include<bits/stdc++.h>
using namespace std;

class node{
	public:
	int data;
	node *next;
}*head=NULL;


void insertBeg(int val){
	node *temp=new node;
	temp->data=val;
	if(head==NULL)
	{
	 
	  temp->next=NULL;
	}
	else
	{
		temp->next=head;
		
	}
	 head=temp;
}

void insertAtIndex(int val,int index){
	int i;
	node *last = head;
	node *temp = new node;
	temp->data = val;
	
	if(index>2)
	{
		for(i=3;i<=index;i++)
		{
			last = last->next;
		}
	}
	temp->next = last->next;
	last->next = temp;
	
	return;
	
}
void insertEnd(int val){
	node *last = head;
	node *temp = new node;
	temp->data = val;
	temp->next = NULL;
	
	if(head==NULL)
	{
		head = temp;
		return;
	}
	while(last->next != NULL)
		last = last->next;
	
	last->next = temp;
	
	return;
}
void print(){
	
	if(head==NULL)
	cout<<"Empty";
	else
	{
		node *temp=new node;
	    temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
}

int main(){
	
	char var='y';
	int x,item,index;
	
	while(var!='n')
	{
		cout<<"What operation you want to do ? \n"
		<<"1.Insert at the Beginning\n"
		<<"2.Insert at some Index\n"
		<<"3.Insert at the End\n"
		<<"4.Print the Linked List\n"
		<<"Enter your choice: ";
		cin>>x;
		
		switch(x)
		{
			case 1:
				cout<<"Enter the element: ";
				cin>>item;
				insertBeg(item);
				break;
				
			case 2:
				cout<<"Enter the element: ";
				cin>>item;
				cout<<"Enter the Index: ";
				cin>>index;
				insertAtIndex(item,index);
				break;
				
			case 3:
				cout<<"Enter the element: ";
				cin>>item;
				insertEnd(item);
				break;
				
			case 4:
				cout<<"The linked list is: ";
				print();
				break;
				
			default:
				cout<<"Wrong choice"<<endl;
				
		}
		
		cout<<"\n";
		
		cout<<"Want to do any more operation ?(y/n)";
		cin>>var;
	}
	
	return 0;
}

