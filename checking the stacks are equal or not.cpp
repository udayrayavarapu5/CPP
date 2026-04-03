#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>st1;
	st1.push(10);
	st1.push(20);
	st1.push(30);
	cout<<"The size of first stack:"<<st1.size()<<endl;
	stack<int>st2;
	st2.push(40);
	st2.push(50);
	st2.push(60);
	cout<<"The size of second stack:"<<st2.size()<<endl;
	if((st1.size())==(st2.size()))
	{
		cout<<"The both stacks are equal";
	}
	else
	{
		cout<<"Given stack are not eqaul";
	}
	return 0;
}
