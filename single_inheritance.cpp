#include<iostream>
using namespace std;
//Parent class 
class student_result
{
     string name;
     int m1,m2,m3;
     int roll_no;
     int avg;
     // Function to input student details
     public:
     input()
     {
          cout<<"Enter the name: ";
          cin>>name;
          cout<<"Enter the roll no: ";
          cin>>roll_no;
          cout<<"Enter the marks :";
          cin>>m1;
          cin>>m2;
          cin>>m3;
     }
      // Function to calculate average marks
     get_result()
     {
        avg=m1+m2+m3;
     }
     //Function to check pass/fail based on average marks
     check()
     {
        if(avg>=50)
        {
            cout<<"Pass"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
     }
      // Function to display student details   
        disp()
        {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << roll_no << endl;
        cout << "Marks obtained in subject 1: " << m1 << endl;
        cout << "Marks obtained in subject 2: " << m2 << endl;
        cout << "Marks obtained in subject 3: " << m3 << endl;
            
        }
};
// Parent class: student1 inherits from student_result
class student1 : public student_result
{   
    public:
    // Function to display result
     void result(){
        cout << "RESULT" << endl;
        disp();
        get_result();
        check();
}
};
// Main function
main(){
    student1 s ; // Create object of student1 (child class)
    s. input();
    s. result();
   
}