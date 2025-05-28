#include<iostream>
using namespace std;
class test
{
       public:
        inline disp()
       {
        cout<<"test disp()";

        }
       };
/*access()
{
    t1.disp();
} */

main()
{
    test t1;
    t1.disp(); //-> cout<<""test:disp();
}

