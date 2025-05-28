#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> mark = {10, 20, 30, 40, 50}; // Define and initialize 'mark'
    vector<int> new_mark = {};
    
    new_mark.swap(mark);  // Swap contents with 'mark'

    // Declare the iterator before using it
    vector<int>::iterator itr1;

    // Print elements of new_mark
    for (itr1 = new_mark.begin(); itr1 != new_mark.end(); itr1++)
    {
        cout << *itr1 << "\t";
    }

    // Optional: set itr1 to point to beginning of mark (which is now empty)
    itr1 = mark.begin(); 
    cout << "\nIterator pointing to: " << (itr1 != mark.end() ? to_string(*itr1) : "end");
}
