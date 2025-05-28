#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s1;
    s1.push(11);
    s1.push(22);
    s1.push(33);
    s1.push(44);
    s1.push(55);
    cout << s1.top() << endl;
    cout << s1.size() << endl;
    int e, f = 0;
    cout << "enter the element to find:" << endl;
    cin >> e;

    while (s1.size() > 0)
    {
        if (s1.top() == e)
        {
            cout << s1.top() << "is present" << endl;
            f++;
            break;
        }
        else
        {
            s1.pop();
        }
    }
    if (f == 0)
    {
        cout << e << " is not present in the stack " << endl;
    }

    return 0;
}