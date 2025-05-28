//  #include<iostream>
// using namespace std;
//  int ab=123;
// int add(int a,int b)
// {
//     int c;
//     c=(a+b);
//    // cout<<&c;
//     return c;

// }


// main()
// {
//     int x;
//     x=add(10,10);
//     cout<<x<<endl;
//    // cout<<&x;
// }


#include<iostream>
using namespace std;
 int val =123;
 int& disp()
 {
    return val;
 }
 main()
 {

   // int c=567;
    cout<<val<<endl;
   disp()=567;
   
   cout<<val<<endl;
 }
