#include<iostream>
using namespace std;
class student{
	public:
			int total;
		int s1,s2,s3;
		float percentage;
	     void studentMarks()
	     {
	     	cout<<"s1 marks:";
	     	cin>>s1;
	     	cout<<"s2 marks:";
	     	cin>>s2;
	     	cout<<"s3 marks:";
	     	cin>>s3;
		 }
	      void DefineAverage()
	      {
	          total=(s1+s2+s3)/3;
	         cout<<"total avg:"<<total<<endl;
		  }
		  void percentageOfStudent()
		  {
		  
		  	 percentage=((s1+s2+s3)/300.0)*100;
		  	cout<<"percenage:"<<percentage<<endl;
		  }
		  void display()
		  {
		  	cout<<"\ns1 marks:"<<s1<<endl;
		  	cout<<"s2 marks:"<<s2<<endl;
		  	cout<<"S3 marks:"<<s3<<endl;
		  	cout<<"total avg:"<<total<<endl;
		  	cout<<"percentage of student:"<<percentage<<endl;
		  }
};
int main()
{
	student s;
	s.studentMarks();
	s. DefineAverage();
	s.percentageOfStudent();
//	s. display();
	return 0;
}
