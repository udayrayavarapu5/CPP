#include<iostream>
using namespace std;
 struct Node{
    int data;
    Node* next; 	
 };
 class LinkedList{
    private:
            Node* head;
    public: 
            linkedList()
            {
            	head=NULL;
            }
            void insertionatBegining(int value){
             Node* NewNode=new Node();
             NewNode->data=value;
             NewNode->next=head;
             head=NewNode;
            } 
            void display()
            {
            	if(head==NULL)
            	{
            	  cout<<"list is empty\n";
            	  return;
                  }
                  Node* temp=head;
                  while(temp!=NULL)
                  {
                      cout<<temp->data<<"->";
	    temp=temp->next;	
	}
	cout<<"NULL\n";
            }
    	
 };
 int main()
 {
    LinkedList List;
    List.insertionatBegining(10);
    List.insertionatBegining(20);
    List.insertionatBegining(30);
    List.insertionatBegining(40);
    List.display();
     return 0;
 }
