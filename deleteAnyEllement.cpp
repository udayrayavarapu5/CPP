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
		void display()
		{
			node* temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<"->";
			     	temp=temp->next;
			}
			cout<<"NULL\n";
		}
    	void deleteAnyElement(int key){
    		node* prev=NULL;
    		 node* temp=head;
    		 while(temp!=NULL && temp->data==key)
    		 {
			     head=temp->next;
				 delete temp;
				 temp=head;
			   cout<<"The element is deleted\n";
		     }
    		 while(temp!=NULL && temp->data!=key)
    		 {
    		 	prev=temp;
    		 	temp=temp->next;
			 }
			 if(temp==NULL)
			 {
			 	cout<<"The element is not found\n";
			    return;
			 }
			 prev->next=temp->next;
			 delete temp;
			 cout<<"The linedlist after deleting  element is \n";
	}
 };
 int main()  {
 
 
 	LinkedList list;
 	int n;
 	cout<<"Enter no.of elements:"<<endl;
 	cin>>n;
 	for(int i=0;i<n;i++)
 	{ 		int value;
 		cout<<"Enter the data:";
 		cin>>value;
 		list.insert(value);
	 }
	 list.display();
	 int key;
	 cout<<"Enter the value to delete:\n";
	 cin>>key;
	list. deleteAnyElement(key);
	        list.display();
	  return 0;
}
