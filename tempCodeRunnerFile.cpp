#include <iostream>
#include <stack>
#include <vector> // For demonstrating with underlying container
using namespace std;
int main() {
    // 1. Create a Stack
    stack<int> myStack;
    cout << "1. Stack created: myStack" <<endl;

    // 2. Find the size
    cout << "2. Size of myStack: " << myStack.size() << endl;

    // 3. Insert a new element (push)
    myStack.push(10);
    myStack.push(20);
    cout << "3. Elements pushed: 10, 20" << std::endl;
    cout << "   Current size: " << myStack.size() <<:endl;

    // 4. Delete an element (pop)
    if (!myStack.empty()) {
       cout << "4. Top element to be popped: " << myStack.top() << endl;
        myStack.pop();
        cout << "   Element popped." << std::endl;
       cout << "   Current size: " << myStack.size() << endl;
    } else {
        std::cout << "4. Stack is empty, cannot pop." << endl;
    }

    // 5. Demonstrate begin() and 
    if (!myStack.empty()) {
        vector<int> tempVector;
        stack<int> tempStack = myStack; // Create a copy
        while (!tempStack.empty()) {
            tempVector.push_back(tempStack.top());
            tempStack.pop();
        }
        cout << "   Elements in stack (from top to bottom): ";
        for (int val : tempVector) {
            cout << val << " ";
        }
        cout << endl;
        cout << "   Note: The order is reversed compared to how they were pushed." << endl;
    }

    // 6. max_size()
  //  cout << "6. Maximum possible size of myStack: " << myStack.max_size() << endl;
    

    // 7. capacity()
    cout << "7. capacity() is NOT directly supported by std::stack." << endl;
  
    // 8. reverse()
   
    if (!myStack.empty()) {
        vector<int> tempVector;
        stack<int> tempStack = myStack; // Create a copy
        while (!tempStack.empty()) {
            tempVector.push_back(tempStack.top());
            tempStack.pop();
        }
        reverse(tempVector.begin(), tempVector.end());
        cout << "   Reversed order (if accessed as a vector): ";
        for (int val : tempVector) {
            cout << val << " ";
        }
        cout << endl;
    }

    // 9. empty()
    cout << "9. Is myStack empty? " << (myStack.empty() ? "Yes" : "No") << endl;

    // 10. at()
    cout << "10. at() is NOT directly supported by std::stack." << endl;

    // 11. front()
    cout << "11. front() is NOT directly supported by std::stack." << endl;
   
    // 12. back()
    cout << "12. back() is NOT directly supported by std::stack." << endl;

    // 13. erase()
    cout << "13. erase() is NOT directly supported by std::stack." << endl;
    

    // 14. clear()
    cout << "14. Clearing the stack:" << endl;
    while (!myStack.empty()) {
        myStack.pop();
    }
   cout << "    Size after clear: " << myStack.size() << endl;

    // 15. swap()
    stack<int> anotherStack;
    anotherStack.push(100);
    anotherStack.push(200);
    cout << "15. Before swap:" << endl;
   
    myStack.swap(anotherStack);
    cout << "    After swap:" << endl;


    // 16. merge()
    cout << "16. merge() is NOT directly supported by std::stack." <<endl;

    return 0;
}