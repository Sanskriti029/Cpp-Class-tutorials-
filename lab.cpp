#include <iostream>
using namespace std;
class MyClass 
{
private:
    int score;

public:
    // Default Constructor
    MyClass()
    {
        score = 0;  
        cout << "Default Constructor called. Value is " << score<< endl;
    }
    // Parameterized Constructor
    MyClass(int x) {
        score = x;  // Initialize 'value' with user-defined input
         cout << "Parameterized Constructor called. Value is " << score << endl;
    }
    // Copy Constructor
    MyClass( MyClass &obj) {
        score = obj.score;  // Copy the value from another object
        cout << "Copy Constructor called. Value is " << score << endl;
    }
    // Function to display value
    void display() {
        cout << "Score: " << score << endl;
    }
};
// Main function
int main() 
{

    //Creating obj1 using Default Constructor
    MyClass obj1;  // Calls Default Constructor

    //Creating obj2 using Parameterized Constructor
    MyClass obj2(42);  // Calls Parameterized Constructor with value 42

    //Creating obj3 using Copy Constructor:
    MyClass obj3 = obj2;  // Calls Copy Constructor (copying obj2)

    // Display values of objects
    cout << "\nDisplaying values from objects:" << endl;
    obj1.display();
    obj2.display();
    obj3.display();
 return 0;
}


