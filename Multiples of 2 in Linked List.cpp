#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
class LinkedList{
	public:
		node* head;
		LinkedList()
		{
			head=NULL;
		}
		void insertionAtEnd(int value)
		{
			node* newnode=new node;
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
		 void display()
		 {
		 	node* temp=head;
		 	while(temp!=NULL)
		 	{
		 		cout<<(temp->data)*2<<"->";
		 		temp=temp->next;
			 }
			 cout<<"koushik\n";
		 }
};
int main()
{
	LinkedList list;
	list.insertionAtEnd(20);
list.insertionAtEnd(30);
list.insertionAtEnd(40);
	list.display();
	return 0;
}
