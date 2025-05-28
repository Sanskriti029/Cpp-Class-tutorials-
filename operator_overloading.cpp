#include<iostream>
using namespace std;

class test
{
   public:
   int a,b,c;
   get(int x,int y)
   {
          a=x;// t1.a=10,t1.b=10     // t2.a=20,t2.b=20 
          b=y;
   }
   disp()
   {
    cout<<a<<endl;      //t1.a   t2.a
    cout<<b<<endl;      //t1.b   t2.b
   }
    /*add()        //we cannot use +() as a function directly 
    {
        c=a+b;
    }*/
     test operator +(test &x)            //x=t2
    {
           test temp;   //object creation 
           temp.a= a+x.a;        // temp.a=t1.a+x.a
            temp.b= b+x.b;       // temp.b=t1.b+x.b
            return temp;
    }
};

main()
{
    //clrscr();
    test t1,t2,t3;
    t1.get(10,10);
    t2.get(20,20);
    t1.disp();
    t2.disp(); 
     //t1.add();
     //t2.add();
    t3= t1+ t2;                // t1.+(t2);         -> t3=temp->t3.a=temp.a ,t3 .b =temp.b           //cpoy constructor 
    t3.disp();
    // return 0;

}