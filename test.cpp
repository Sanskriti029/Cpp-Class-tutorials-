#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    // Constructor to initialize complex number
    //Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    Complex(float r,float i)
    {
        // r=0;
        // i=0;
        // this->real=r;
        // this->imag=i;
        real=r;
        imag=i;
    }

    // Overload the '+' operator
    Complex operator +( Complex  &x) {
        // Complex temp;
        // temp.real=real+x.real;
        // temp.imag=imag+x.imag;
        // return temp;
        // Add real and imaginary parts separately
       return Complex(real + x.real, imag + x.imag);
    }

    // Function to display the complex number
    void display()  {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 4.2);  // Complex number 1
    Complex c2(1.2, 2.8);  // Complex number 2

    // Use the overloaded '+' operator
    Complex c3 = c1 + c2;

    // Display the result
    cout << "Result of c1 + c2 = ";
    c3.display();  // Output: 4.7 + 7i

    return 0;
}
