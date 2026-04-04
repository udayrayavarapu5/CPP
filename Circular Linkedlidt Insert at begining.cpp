#include<iostream>
using namespace std;
class Node{
    public:
    	  int data;
      Node* next;
      public:
      	Node(int d){
      		data=d;
      		next=NULL;
		  }
};
class CircularLinkedList{
	private:
		Node* head;
	public:
		CircularLinkedList()
		{
			head=NULL;
		}
		void InsertAtFirst(int value)
		{
			Node* newnode=new Node(value);
			if(head==NULL)
			{
				head=newnode;
				head->next=head;
			}
			else
			{
				Node* temp=head;
				while(temp->next!=head)
				{
					temp=temp->next;
				}
				newnode->next=head;
				temp->next=newnode;
				head=newnode;
			}
		}
		void display()
		{
			Node* temp=head;
			if(temp==NULL)
			{
				return;
			}
			do
			{
				cout<<temp->data<<"->";
				temp=temp->next;
			}while(temp!=head);
		}
};
int main()
{
	CircularLinkedList Cl;
Cl.InsertAtFirst(10);
Cl.InsertAtFirst(30);
Cl.InsertAtFirst(50);
Cl.InsertAtFirst(70);
Cl.display();
return 0;

}
