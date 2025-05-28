#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> mark = {11, 22, 33, 44, 55};
    vector<int> new_mark = {};

    // vector<int>::iterator itr1; // reference objects
    new_mark.swap(mark);

    // itr1=mark.begin();
    // cout<<*itr1;
    // cout<<"\n"<<mark.size();
    // cout<<"\n"<<mark.capacity();      // same as size()
    // cout<<"\n"<<mark.max_size();

    // //use this loop instead of normal for() loop in exam
    // for(itr1=mark.begin();itr1!=mark.end();itr1++)
    // {
    //     cout<<*itr1<<"\t";
    // };

    // cout<<endl;
    // //for starting from second element
    // for(itr1=mark.begin()+1;itr1!=mark.end();itr1++)
    // {
    //     cout<<*itr1<<"\t";
    // };
    // cout<<endl;
    /*****************for ending at last second element **************/
    // for(itr1=mark.begin();itr1!=mark.end()-1;itr1++)
    // {
    //     cout<<*itr1<<"\t";
    // };
    /***********for swaping mark with new_mark and performing operation on it  *********/

    for (itr1 = new_mark.begin(); itr1 != new_mark.end(); itr1++)
    {
        cout << *itr1 << "\t";
    }
    vector<int>::iterator itr1; // reference objects
    itr1 = mark.begin();
    cout << "\n"<< itr1;
}
