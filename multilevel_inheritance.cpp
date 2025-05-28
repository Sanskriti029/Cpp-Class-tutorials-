#include<iostream>
using namespace std;

// Grandparent class: student_result
class student_result
{ public:
    string name;
    int m1, m2, m3;
    int roll_no;
    int avg;

public:
    // Function to input student details
    void input()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the roll no: ";
        cin >> roll_no;
        cout << "Enter the marks for 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    // Function to calculate average marks
    void get_result()
    {
        avg = m1 + m2 + m3;
    }

    // Function to check pass/fail based on average marks
    void check()
    {
        if (avg >= 50)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }

    // Function to display student details
    void disp()
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
    void result()
    {
        cout << "RESULT" << endl;
        disp();    
        get_result();  
        check();       
    }
};

// Child class: student2 inherits from student1
class student2 : public student1
{
private:
    // Function to calculate grade based on average marks
    void calculate_grade()
    {
        int avg = (m1 + m2 + m3) / 3;  
        cout << "Average marks: " << avg << endl;

        if (avg >= 90)
        {
            cout << "Grade: A+" << endl;
        }
        else if (avg >= 80)
        {
            cout << "Grade: A" << endl;
        }
        else if (avg >= 70)
        {
            cout << "Grade: B+" << endl;
        }
        else if (avg >= 60)
        {
            cout << "Grade: B" << endl;
        }
        else if (avg >= 50)
        {
            cout << "Grade: C" << endl;
        }
        else
        {
            cout << "Grade: F" << endl;
        }
    }

public:

    void result()
    {
        student1::result();  
        calculate_grade();   
    }
};

// Main function
int main()
{
    student2 s;  // Create object of student2 (child class)
    s.input();  
    s.result(); 

    return 0;
}
