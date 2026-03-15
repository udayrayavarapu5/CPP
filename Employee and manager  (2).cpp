// Online C++ compiler to run C++ program online#include<iostream>
#include<string>
#include<iostream>
using namespace std;
class Employee{
    protected:
            string name;
         int id;
        float basicsalary;
        float totalsalary;
    public:
        void getEmployeeDetails()
        {
            cout<<"name:"<<endl;
            cin>>name;
            cout<<"id:"<<endl;
            cin>>id;
            cout<<"basicsalary:"<<endl;
            cin>>basicsalary;
        }
        void calculatesalary()
        {
            totalsalary=basicsalary;
        }
        void displayEmployeeDetails()
        {
             cout<<"\nname:"<<name<<endl;
            cout<<"id:"<<id<<endl;
            cout<<"basicsalary:"<<basicsalary<<endl;
             cout<<"totalsalary:"<<totalsalary<<endl;
        }
};
class Manager:public Employee{
    public:
        int empallowence;
        float calculates;
        void getManagerDetails()
        {
             cout<<"empallowence:"<<endl;
             cin>>empallowence;
        }
        void calculatesalary()
        {
            totalsalary=basicsalary+empallowence;
        }
        void displayManagerDetails()
        {
           displayEmployeeDetails();
        }
    };
    int main()
    {
        Manager  m1;
        m1.getManagerDetails();
        m1.getEmployeeDetails();
        m1.calculatesalary();
        m1.displayManagerDetails();
        return 0;
    }
