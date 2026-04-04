#include<iostream>
using namespace std;
class Node{
	public:
		int data;
	   Node* next;
	   Node(int d){
		data=d;
		next=NULL;
	 }
};
class circularLinkedList{
	private:
		Node* head;
	public:
		circularLinkedList()
		{
			head=NULL;
		}
		void InsertATfirst(int value){
			Node* newnode=new Node(value);
			if(head==NULL){
				head=newnode;
				head->next=newnode;
			}
			else{
				Node* temp=head;
				while(temp->next!=head){
					temp=temp->next;
				}
				newnode->next=head;
				temp->next=newnode;
				head=newnode;
			}
		}
		void DeleteFromFirst(){
			Node* temp=head;
			if(head==NULL){
				return;
			}
			if(head->next==head){
				delete head;
				head=NULL;
			}
			else
			{
				while(temp->next!=head){
					temp=temp->next;
				}
				Node* p=head;
				temp->next=head->next;
				head=head->next;
			    delete p;
			}
		}
		void display(){
			if(head==NULL){
				return;
			}
			Node* temp=head;
			do{
				cout<<temp->data<<"->";
				temp=temp->next;
			}while(temp!=head);
		}
};
int main(){
	circularLinkedList cl;
	cl.InsertATfirst(10);
	cl.InsertATfirst(20);
	cl.InsertATfirst(30);
	cl.InsertATfirst(40);
	cl.DeleteFromFirst();
	cl.display();
	return 0;
}
