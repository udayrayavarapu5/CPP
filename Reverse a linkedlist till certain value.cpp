#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
class linkedList{
           private:
           	node* head;
           	public:
           	   linkedList(){
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
				}
				   else{
				    node* temp=head;
				      while(temp->next!=NULL)
				      {
				      	temp=temp->next;
					  }
					  temp->next=newnode;
			        }
			   }
			   void Reverse_Till_CertainElement(int key)
			   {
			     	node* prev=NULL;
			   	    node* current=head;
			   	    node* next=NULL;
			   	  while(current!=NULL && current->data!=key)
			   	   {
			   	    	next=current->next;
			   		    current->next=prev;
			   		   prev=current;
				       current=next;
			       }
			       if(head!=NULL)
			       {
			       	head->next=current;
			       	head=prev;
				   }
			       
			   }
			   void display()
			   {
			   	node* temp=head;
			   	while(temp!=NULL)
			   	{
			   		cout<<temp->data<<"->";
			   		temp=temp->next;
				   }
			cout<<"Iam Single\n";
			   }
};
int main()
{
	linkedList list;
	int key;
   cout<<"Enter the value of key:\n";
   cin>>key;
   int n;
   cout<<"Enter the size of the Linkedlist:\n";
   cin>>n;
   int value;
   cout<<"Enter the data of LinkedList:\n";
   for(int i=0;i<n;i++)
    {	
      cin>>value;
	  list.insert(value);
	}
	cout<<"Original LinkedLst:\n";
   list.display();
   list.Reverse_Till_CertainElement(key);
  cout<<"Reversed Linkedlist:\n";
   list.display();
   return 0;
}

