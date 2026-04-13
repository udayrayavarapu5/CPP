#include<iostream>
#define max 100
using namespace std;
class  queueInterface{
     public:
     	 virtual void enqueue(int x)=0;
     virtual void dequeue()=0;
     virtual bool isempty()=0;
     virtual bool isfull()=0;
     virtual int peak()=0;
     virtual void display()=0;
};
class queue: public queueInterface{
       public:
       	        int a[max];
       	        int front ;
       	        int rear;
       	        queue(){
       	        	front=0;
       	        	rear=-1;
       	        	
				   }
       	    void enqueue(int x) override{
	        	if(isfull()){
	        		cout<<"The queue is overflow"<<endl;
					return;
				}
				rear++;
				 a[rear]=x;
				 cout<<"the enqueued value:"<<a[rear] <<endl;
	              }
	           void dequeue()  override{
	            	if(isempty()){
	            		cout<<"The queue is empty";
	            		return ;
					}
					cout<<"the front value to be  dequeue:"<<a[front]<<endl ;
					front++;
				}
				bool isfull() override{
				 return rear==max-1;
				}
				bool isempty() override{
				   return (rear<front);
				}
				int peak() override{
				 if(isempty()){
				 	cout<<"The queue is empty";
				 	return -1;
				 }
				  return a[front];
				} 
				void display() override{
				  if(isempty()){
				  	cout<<"The queue is empty";
				  	return;
			  	  }
			     	for(int i=front;i<=rear;i++){
					  cout<<a[i]<<" ";
			      	 } 
				
				}
};
int main(){
	queue q;
	q .enqueue(10);
    q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.dequeue();
	cout<<"The final queue is:";
	q.display();
	return 0;
}

