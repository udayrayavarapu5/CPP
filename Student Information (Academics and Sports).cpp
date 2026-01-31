// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
class AcadamicRecord{
    public:
        int rollnumber;
        float marks;
        void studentAcadamics()
        {
            cout<<"Enter rollnumber:"<<endl;
            cin>>rollnumber;
            cout<<"Enter marks:"<<endl;
            cin>>marks;
        }
};
class sportsRecord{
    public:
        string sports;
        float score;
        void studentSports()
        {
            cout<<"Enter sports:"<<endl;
            cin>>sports;
            cout<<"Enter score:"<<endl;
            cin>>score;
        }
};
class overall:public AcadamicRecord,public sportsRecord {
      public:
            float avg;
            
              void overallPerformance()
            {
                avg=(marks+score)/2;
                cout<<"total avg:"<<avg<<endl;
                
            }

            void displayStudentInformation()
            {
             cout<<"\nrollnumber:"<<rollnumber<<endl;
             cout<<"marks:"<<marks<<endl;
             cout<<"sports:"<<sports<<endl;
            cout<<"score:"<<score<<endl;
            cout<<"totalperformance:"<<avg<<endl;
            
            }
  };
          
int main() {
    
    overall ov;
    ov.studentAcadamics();
    ov.studentSports();
    ov.overallPerformance();
    ov. displayStudentInformation();
    
    return 0;
}