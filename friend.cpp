//implementing friend function 


#include<iostream>
using namespace std;
class test2;
class test1
{
    int mark1;
    friend result(test1,test2 );  // friend class with object of both class as argument 

};
class test2
{
    int mark2;
    friend result(test1,test2);
};
result(test1 temp1,test2 temp2)
{   
  // cout<<"Enter the marks";
 //  cin>>temp1.mark;
  temp1.mark1=55;
  temp2.mark2=66;
  if(temp1.mark1>=temp2.mark2)
  {
      cout<< temp1.mark1<<"is bigger";
     
      
  }
  else{
      cout<< temp2.mark2<<"is bigger";
  }
}
main()
{
  test1 t1;
  test2 t2;
   result(t1,t2);
}


// // implement friend class 

// #include<iostream>
// using namespace std;
// class test2; // forward declaration 
// class test1
// {
//    int mark;
//    friend test2;  // friend class 
// };

//  class test2 
// {
//     public:
//     get(test1 &temp)  //temp object of test1 class 
//     {
//        temp.mark=123;   

//     }
//     disp(test1 &temp)
//     {
//           cout<<temp.mark;
//     }
    
// };
// main()
// {
//     test2 t2;
//     test1 t1;
//     t2.get(t1);
//     t2.disp(t1);
// }