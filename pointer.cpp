#include<iostream>
using namespace std;
main()
{
       int a=123;
      // cout<<a<<endl;
       //cout <<&a;// memory locatio in form of hexadecimal value 
       int *p=&a;
       cout<<"address of p" <<&p<<endl;
       cout <<"address of a"<< &a<<endl;
       cout<<"value of p"<<p<<endl;
      // cout<<"address of p"<<q<<endl;
       //int *q = &p;   // code cannot be exeucuted as a pointer cannot be assigned to other pointer 
       //cout<<q;
}