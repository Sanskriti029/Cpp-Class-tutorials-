#include<iostream>
using namespace std;
class prime
{   
    private:
    int num;
    int count=0;

    checkprime()
    {
        for(int i=1;i<=num;i++)
        {
           if(num%i==0)
        {
            count++;
        }
        }
       
    }
    public:
         void input()
        {
            cout<<"enter the number: ";
            cin>>num;
        }

         void display()
        {
            checkprime();
             if(count==2)
             { 
            cout<< num<<" is prime number";
            }
            else
            {
                cout<<num<<" is not prime number ";
            }
        }
    
};
int main()
{
    prime obj;
    obj.input();
    obj.display();
    return 0;
}
