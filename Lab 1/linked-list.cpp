#include "bits/stdc++.h"
using namespace std;
struct node{
	int data;
	struct node *next;
};
class linkedlist
{
	private:
		node *head,*tail;
	public:
		linkedlist()
		{
			head=NULL;
			tail=NULL;
		}
		void newNode(int data)
		{
			node *temp=new node;
			temp->data=data;
			
			if(head==NULL)
			{
				head=temp;
				tail=temp;
				temp=NULL;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}

		void insert(int pos,int value)
		{
			node *pre=new node;
			node *cur=new node;
			node *temp=new node;
			
			cur=head;

			for(int i=1;i<pos;i++)
			{
				pre=cur;
				cur=cur->next;
			}
			temp->data=value;
			pre->next=temp;
			temp->next=cur;
			
		}

		void delete1(int pos)
		{
			node *current=new node;
			node *previous=new node;
			current=head;
			for(int i=1;i<pos;i++)
			{
				previous=current;
				current=current->next;
			}
			previous->next=current->next;
		}

		void print()
		{
			node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<endl;

				temp=temp->next;
			}
			cout<<endl;
			return;
		}
};


int main()
{
	int l,choice;
	linkedlist obj;
	while(1)
	{
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter number to insert ";
				cin>>l;
				obj.newNode(l);
				break;
			case 2:
				cout<<"Linked list elements"<<endl;
				obj.print();
				break;
			case 3:
				cout<<"Enter position to delete ";
				cin>>l;
				obj.delete1(l);
				break;
			default:
				cout<<"Wrong choice"<<endl;
				break;
		}
	}
	
}