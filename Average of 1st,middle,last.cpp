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
			      void Averageof_First_middle_Last(int n)
			      {
			   	   int mid=(n)/2;
			   	   int  a[20];
			   	   node* temp=head;
			   	   for(int i=0;i<n;i++)
			   	   {
			   	   	 a[i]=temp->data;
			   	   	 temp=temp->next;
					  }
					  int avg=(a[0]+a[mid]+a[n-1])/3;
			   	   cout<<"The avg of first,last,middle:	"<<avg;
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
	cout<<"Original LinkedLst:";
   list.display();
   list.Averageof_First_middle_Last(n);
   return 0;
}

