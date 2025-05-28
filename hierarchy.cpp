#include<iostream>
using namespace std;

// Base class: Student Details
class student {
public:
    string name;
    int roll_no;

public:
    // Function to input student details
    void input() {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter student's roll number: ";
        cin >> roll_no;
    }

    // Function to display student details
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

// Derived class 1: Marks inherits from studentDetails
class Marks : public student {
public:
    int m1, m2, m3;

public:
    // Function to input marks
    void inputMarks() {
        cout << "Enter marks for 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    // Function to display marks
    void displayMarks() {
        cout << "Marks in Subject 1: " << m1 << endl;
        cout << "Marks in Subject 2: " << m2 << endl;
        cout << "Marks in Subject 3: " << m3 << endl;
    }
};

// Derived class 2: Result inherits from student Details
class Result : public student {
public:
    float avg;

public:
    // Function to calculate the average marks
    void calculateAverage(int m1, int m2, int m3) {
        avg = (m1 + m2 + m3) / 3.0;
    }

    // Function to check pass or fail
    void checkResult() {
        if (avg >= 50) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }

    // Function to display result
    void displayResult() {
        cout << "Average Marks: " << avg << endl;
        checkResult();
    }
};

// Main function
int main() {
    // Creating objects of Marks and Result classes
    Marks marks;
    Result result;
    marks.input();    
    marks.inputMarks();
    result.calculateAverage(marks.m1, marks.m2, marks.m3);
    marks.display();
    marks.displayMarks();
    result.displayResult();

    return 0;
}
