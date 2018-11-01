#include <iostream>

using namespace std;
class Complex
{ private:
    double real;
    double imag;

public:
    Complex()
    {
        real=0;
        imag=0;

    }
    Complex(double r, double i)
    {
        real=r;
        imag=i;
    }
    friend Complex mul(Complex c1, Complex c2);
    void display(void);
    Complex operator=(const Complex& other)
    {
        real=other.real;
        imag=other.imag;
        return *this;
    }


 /*Complex operator+(const Complex&  other)
    {
        double newreal=real+other.real;
        double newimag=imag+other.imag;
        Complex temp(newreal,newimag);
        return temp;

    }*/
    Complex operator+(Complex c1)
    {
        Complex temp;
        temp.real=real+c1.real;
        temp.imag=imag+c1.imag;
        return temp;
    }
    Complex operator-(Complex c2)
    {
        Complex temp;
        temp.real=real-c2.real;
        temp.imag=imag-c2.imag;
        return temp;

    }

/*
     void mul(Complex c1, Complex c2)
    {
        Complex c3;
        c3.real=(c1.real*c2.real)-(c1.imag*c2.imag);
        c3.imag=(c1.real*c2.real)+(c1.imag*c2.imag);
        cout<<c3;


    }
    */
/*
    Complex mul(Complex c1, Complex c2)
    {
        Complex c3;
        c3.real=(c1.real*c2.real)-(c1.imag*c2.imag);
        c3.imag=(c1.real*c2.real)+(c1.imag*c2.imag);
        return (c3);
    }
void Complex::display()
    {
        cout<<real<<"+i"<<imag;
    }
    */

    friend ostream&operator<<(ostream&out,Complex c)
    {
        out<<c.real<<"+"<<c.imag<<"i"<<endl;
    }


};
Complex mul(Complex c1, Complex c2)
    {
        Complex c3;
        c3.real=(c1.real*c2.real)-(c1.imag*c2.imag);
        c3.imag=(c1.real*c2.real)+(c1.imag*c2.imag);
        return (c3);
    }
void Complex::display()
    {
        cout<<real<<"+i"<<imag;
    }






int main()
{ Complex c1(3,4);
Complex c2(1,2);
Complex c3;
Complex c4;
Complex c;
c4=c1-c2;
c3=c1+c2;
c=mul(c1,c2);

cout<<"first complex number"<<" "<<endl;
c1.display();
cout<<endl;

cout<<"secend complex number"<<endl;
c2.display();
cout<<endl;
cout<<"multtiplication of two complex number"<<endl;
c.display();
cout<<endl;
cout<<"adding complex number equal"<<endl;

cout<<c3<<endl;
cout<<"substraction of complex number equal"<<endl;
cout<<c4<<endl;





}
