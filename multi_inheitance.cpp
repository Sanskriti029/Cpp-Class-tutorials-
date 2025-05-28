#include <iostream>
using namespace std;

// Base class 1: Student Details
class student {

    string name;
    int roll_no;

public:
    // Function to input Student details
    void input() {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter student's roll number: ";
        cin >> roll_no;
    }

    // Function to display Student  details
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

// Base class 2: Marks
class Marks {
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

// Derived class: Result (Multiple Inheritance from student Details and Marks)
class Result : public student, public Marks
 {

    float avg;

public:
    // Function to calculate the average marks
    void calculateAverage() {
        avg = (m1 + m2 + m3) / 3.0;
    }

    // Function to display the result (Pass/Fail)
    void checkResult() {
        if (avg >= 50) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }

    // Function to display all information
    void displayResult() 
    {
        display();  
        displayMarks();            
        calculateAverage();      
        cout << "Average Marks: " << avg << endl;
        checkResult();           
    }
 };
// Main function
int main() {
    Result student;  // Create an object of the Result class (derived from student Details and Marks)

    // Input data
    student.input(); 
    student.inputMarks();            

    // Display result analysis
    student.displayResult();

    return 0;
}
