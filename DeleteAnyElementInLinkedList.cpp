#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
class LinkedList{
	private:
		node* head;
	public:
		LinkedList()
		{
			head=NULL;
		}
		void insert(int value)
		{
			node* newnode=new node();
			newnode->data=value;
			newnode->next=NULL;
			if(head==NULL)
			{
				head=newnode;
			return;
			}
			node* temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
				temp->next=newnode;
		}
		void deleteNode(int value)
		{
			if(head==NULL)
			{
				cout<<"List is empty";
				return ;
			}
			if(head->data==value)
			{
				node* temp=head;
				head=head->next;
				delete temp; 
				return;
			}
			node* current=head;
			node* prev=NULL;
			while(current!=NULL&& current->data!=value){
				prev=current;
				current=current->next;
			}
			if(current==NULL)
			{
				cout<<"value is not present:\n";
			}
			prev->next=current->next;
			delete current;
		}
		void display()
		{
			node* temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<"->";
			    temp=temp->next;
			}
		}
};
int main()
{
	LinkedList list;
	int n;
	cout<<"Enter the no.of nodes in a LinkedList:";
	cin>>n;
	int value;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the data of LinkedList:"<<" ";
		cin>>value;
		list.insert(value);
	}
	cout<<"\nThe Original LinkedList:\n";
	list.display();
	cout<<"\nEnter the value to delete";
	cin>>value;
	list.deleteNode(value);
	cout<<"\nThe LinkedList after deleting a value:\n";
	list.display();
	return 0;
}
