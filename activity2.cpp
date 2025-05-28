
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm> // For reverse()

using namespace std;

int main() {
    // 1. Create a Stack
    stack<int> myStack;
    cout << "1. Stack created: myStack" << endl;

    // 2. Find the size
    cout << "2. Size of myStack: " << myStack.size() << endl;

    // 3. Insert new elements
    myStack.push(10);
    myStack.push(20);
    cout << "3. Elements pushed: 10, 20" << endl;
    cout << "   Current size: " << myStack.size() << endl;

    // 4. Delete an element (pop)
    if (!myStack.empty()) {
        cout << "4. Top element to be popped: " << myStack.top() << endl;
        myStack.pop();
        cout << "   Element popped." << endl;
        cout << "   Current size: " << myStack.size() << endl;
    } else {
        cout << "4. Stack is empty, cannot pop." << endl;
    }

    // 5. Demonstrate begin() and end() via vector workaround
    if (!myStack.empty()) {
        vector<int> tempVector;
        stack<int> tempStack = myStack; // Copy stack
        while (!tempStack.empty()) {
            tempVector.push_back(tempStack.top());
            tempStack.pop();
        }
        cout << "5. Elements in stack (top to bottom): ";
        for (int val : tempVector) cout << val << " ";
        cout << "\n   Note: This simulates begin() and end() using vector." << endl;
    }

    // 6. max_size() is not available in stack, but supported in vector
    vector<int> demoVec;
    cout << "6. max_size() via vector: " << demoVec.max_size() << endl;

    // 7. capacity()
    cout << "7. capacity() is NOT supported by std::stack (only in vector/deque)." << endl;

    // 8. reverse()
    if (!myStack.empty()) {
        vector<int> tempVector;
        stack<int> tempStack = myStack;
        while (!tempStack.empty()) {
            tempVector.push_back(tempStack.top());
            tempStack.pop();
        }
        reverse(tempVector.begin(), tempVector.end());
        cout << "8. Stack elements in reversed order: ";
        for (int val : tempVector) cout << val << " ";
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
    cout << "14. Clearing the stack..." << endl;
    while (!myStack.empty()) {
        myStack.pop();
    }
    cout << "    Stack cleared. Current size: " << myStack.size() << endl;

    // 15. swap()
    stack<int> anotherStack;
    anotherStack.push(100);
    anotherStack.push(200);
    cout << "15. Swapping stacks..." << endl;
    myStack.swap(anotherStack);
    cout << "    Top of myStack after swap: " << myStack.top() << endl;

    // 16. merge()
    cout << "16. merge() is NOT supported by std::stack (can be implemented manually using vectors)." << endl;

    return 0;
}
