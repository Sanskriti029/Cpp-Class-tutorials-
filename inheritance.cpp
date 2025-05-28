//HYBRID INHERITANCE 

#include<iostream>
using namespace std;
class parent
{
    public:
    disp()
    {
        cout<<"parent class ";
    }


};
class child1:public parent{
    public:
    /*show(){
 cout<<"parent class ";
}*/


};
class child2:public parent
{

};
class  gchild : public child1, child2
{

};
main()
{
    gchild c;
    c.child1::disp();//IMPORATANT CODE 
     
}
