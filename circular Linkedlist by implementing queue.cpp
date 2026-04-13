#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
class circularqueue{
	private:
		Node* rear;

	public:
	    circularqueue (){
	    	rear=NULL;
		}
		void enqueue(int value){
			Node* newnode=new Node;
			newnode->data=value;
			if(rear==NULL){
				rear=newnode;
				rear->next=rear;
			}
		      else
		         {
		         	newnode->next=rear->next;
		         	 rear->next=newnode;
		              rear=newnode;
		             
				 }
		}
		void dequeue()
		{
			if(rear==NULL){
				cout<<"The queue is empty";
				return ;
			}
			Node* temp=rear->next;
			if(rear==rear->next){
				rear=NULL;
			}
			else
			  {
			  	rear->next=temp->next;
			  } 
			  cout<<"The element has to be delete:"<<temp->data<<endl;
			  delete temp;
			
		}
	   void display(){
	   	if(rear==NULL){
	   		cout<<"The queue is empty:";
	   		return ;
		   }
		   Node* temp=rear->next;
		   do{
		    cout<<temp->data<<"->";
		     temp=temp->next;
		   }while(temp!=rear->next);
		   cout<<endl;
     }
};
int main()
{
	circularqueue cl;
	cl.enqueue(10);
	cl.enqueue(20);
	cl.enqueue(30);
	cl.enqueue(40);
	cl.dequeue();
	cout<<"The circular linkedlist by implementing queue:"<<endl;
	cl.display();
	return 0;
}

















