#include<iostream>
using namespace std;
class swaping
{
    int a,b,temp;
    public:
     void input()
    {
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
      cout<<"Initial values"<<endl;
      cout<<"a="<<a<<endl;
      cout<<"b="<<b<<endl;
    }

    void using_temp()
   {
    
    temp=a;
    a=b;
    b=temp; 
   }
   swap_without_temp()
   {
    a=a+b;
    b=a-b;
    a=a-b;

   }
    void display()
   {  
      
      cout<<"Swapped values using temp"<<endl;
      using_temp();
     cout<<"a="<<a<<endl;
      cout<<"b="<<b<<endl;
   }
   void print()
   {

      cout<<"values after swapping without using temp variable "<<endl;
      swap_without_temp();
      cout<<"a="<<a<<endl;
      cout<<"b="<<b<<endl;
   }
   };


int main()
{ 
  swaping  obj; 
  obj.input();
   int s;
   cout<<"Enter 1 for performing swaaping using temp variable & 2 for performing swapping without using temp variable:  ";
   cin>>s;
   if(s==1)
   {
    obj.display();
    
   }
   
   else if(s==2)
   {
    
    obj.print();
    }
    else
    {
      cout<<"Invalid value for s";

    } 
}