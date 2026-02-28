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
 		   //construcctor
 		  LinkedList(){
		   head =NULL;
        	}
 		  void insertionAtEnd(int value)
 		  {
 		  	node* newNode=new node();
 		  	newNode->data=value;
 		  	newNode->next=NULL;
 		  	if(head==NULL)
 		  	{
 		  	head=newNode;
 		  	return;
			   }
			      node* temp=head;
			      while(temp->next !=NULL)
			      {
			      	temp=temp->next;
				  }
		    temp->next=newNode;
		   }
		   void display()
		   {
		   	node* temp=head;
		   	while(temp!=NULL)
		   	
			   {
			    cout<<temp->data<<"->";
		   	    temp=temp->next;
		       }
		       cout<<"Akhilesh@\n";
		   }
		   
 };
 int main()
 {
 	LinkedList list;
 	list.insertionAtEnd(10);
 	list.insertionAtEnd(20);
 	list.display();
 	return 0;
 }
