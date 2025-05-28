#include <iostream>
using namespace std;
class Result;  // Forward declaration
class Student 
{

    int marks[4];
    public:
    Student(int m1, int m2, int m3, int m4) 
    {
        marks[0] = m1; 
        marks[1] = m2;
         marks[2] = m3;
          marks[3] = m4;
    }
    friend class Result;  // Friend class
};
class Result 
{
      public:
    int calculateTotal(Student s)
     {
        int total = 0;
        for (int i = 0; i < 4; i++) 
        {
            total += s.marks[i];  // Access private data
        }
        return total;
    }
};
int main() {
    Student st(85, 90, 78, 99);
    Result r;
    cout << "Total Marks: " << r.calculateTotal(st) << endl;
    return 0;
}