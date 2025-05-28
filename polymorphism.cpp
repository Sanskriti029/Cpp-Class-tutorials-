//function overloading 
#include<iostream>             
#include<conio.h>
using namespace std;
class result
{
    public:
    int m1,m2,m3,avg;
    get_marks(int m,int n)
    {
         m1=m;
         m2=n;
         avg=(m1+m2)/2;
         cout<<avg;
    }
    get_marks(int m)
    {
        avg=m;
    }
    get_marks(int m,int n,int p)
    {
         m1=m;
         m2=n;
         m3=p;
         avg=(m1+m2+m3)/2;
         cout<<avg;
    }
    check()
    {
       if(avg>=50)
       {
        cout<<"pass";
       }
      else
       {
        cout<<"Fail"; 
       }
       
    }
};
main()
{
    result r1,r2,r3;
    /*cout<<"Enter a mark";
    cin>>x;
    cout<<"Enter a mark";
    cin>>y;*/
    r1.get_marks(51);
    r1.check();
    r2.get_marks(30,67);
    r2.check();
    r3.get_marks(30,67,41);
    r3.check();

}

