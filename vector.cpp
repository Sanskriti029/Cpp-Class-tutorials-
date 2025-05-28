#include<iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> marks1={10,20,30,40,50};
    vector <int> marks2{66,77};
    vector <int> marks3(5,99);  //-> {99,99,99,99,99}
    cout<<marks1.size()<<endl;
    // cout<<marks1;
    marks1.push_back(60);
    marks1.push_back(70);// insert element at the back 
    // marks1.pop_back(); // delete element from back
    // marks1.pop_back();
    
    cout<<marks1.size()<<endl;
    for (int i = 0; i < marks1.size(); i++)
    {
        cout<<marks1[i]<<"\t";                //cout<<marks1.at(0);
    }
    // cout<<endl;
    // // cout<<marks1.at(0);          //another method of printing vector
    // marks1.clear();       // clear all the elements of vector 
    // cout<<marks1.size()<<endl;
    
    
    
    //imp
    // cout<<endl;
    // for(int no:marks1)
    //     {
            
    //     cout<<no<<"\t";
    // }
   // vector <int> marks4.copy(marks1);


   marks1.erase(0);
    return 0;
}