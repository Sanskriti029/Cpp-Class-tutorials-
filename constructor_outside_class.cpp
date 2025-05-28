#include<iostream>
using namespace std;
class college
{
    
    int marks;
    public:
    college();

    void  display();
};
    

college::college()  // constructor defined outside the class
    {
        cout<< "Enter the marks";
        cin >> marks;

    }
    void college::display()
    {
        cout<<marks;
    }

int main()
{
    college obj;
    obj.display();
}

