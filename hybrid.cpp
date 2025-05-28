#include<iostream>
using namespace std;

// Base class 1: student_result (Student Information and Marks)
class student_result {
protected:
    string name;
    int roll_no;
    int m1, m2, m3;

public:
    // Function to input student details
    void input() {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the roll no: ";
        cin >> roll_no;
        cout << "Enter the marks for three subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    // Function to display student details
    void disp() {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << roll_no << endl;
        cout << "Marks obtained in subject 1: " << m1 << endl;
        cout << "Marks obtained in subject 2: " << m2 << endl;
        cout << "Marks obtained in subject 3: " << m3 << endl;
    }
};

// Base class 2: marks (Handling calculation of average and total marks)
class marks {
protected:
    int avg;
    
public:
    // Function to calculate average marks
    void get_result(int m1, int m2, int m3) {
        avg = (m1 + m2 + m3) / 3;
    }

    // Function to check pass/fail based on average marks
    void check() {
        if (avg >= 50) {
            cout << "Pass" << endl;
        } else {
            cout << "Fail" << endl;
        }
    }
};

// Derived class: student1 (Hybrid Inheritance combining student_result and marks)
class student1 : public student_result, public marks {
public:
    // Function to display result
    void result() {
        cout << "RESULT" << endl;
        disp();
        get_result(m1, m2, m3);  // Pass marks to calculate the average
        cout << "Average Marks: " << avg << endl;
        check();
    }
};

// Main function
int main() {
    student1 s; // Create object of student1 (child class)

    // Input student details and marks
    s.input();

    // Display the result (marks and result)
    s.result();

    return 0;
}
