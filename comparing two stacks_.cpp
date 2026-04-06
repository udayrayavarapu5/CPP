#include <iostream>
using namespace std;
#define max 100
class stack{
	private:
	    int arr[max];
	    int top;
	public:
		stack(){
		   top=-1;
		}
	void push(int value){
		if(top>=99){
			cout<<"stack is FULL";
			return;
		}
		arr[++top]=value;
	}
	void display(){
		for(int i=top;i>=0;i--){
			cout<<arr[i]<<"   ";
		}
		cout<<endl;
	}
	int compare(stack s1,stack s2){
		if(s1.top!=s2.top){
			return 0;
		}
	for(int i=top;i>=0;i--){
	if(s1.arr[i]!=s2.arr[i]){
		return 0;
	}
	return 1;	
	
}
};
int main()
{
	stack s1,s2;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	cout<<"STACK 1 ";
	s1.display();
	s2.push(10);
	s2.push(20);
	s2.push(40);
	cout<<"STACK 2 ";
	s2.display();
    if(s1.compare(s1,s2)==1)
    cout<<"ARE EQUAL";
    else
    cout<<"NOT EQUAL";
    return 0;
}