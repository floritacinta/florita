#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
class Complex

{

private:

double r, i;

public:

Complex();

Complex(double x);

Complex(double a, double b);

//Complex(Complex &c);

void setReal(double x);

void setIm(double y);

double getReal();

double getIm();

Complex operator +(Complex c1);

Complex operator +(int A1);

Complex operator +(double A1);

Complex operator -(Complex c1);

Complex operator -(int A1);

Complex operator -(double A1);

Complex operator *(Complex c1);

Complex operator *(int A1);

Complex operator *(double A1);

Complex operator /(Complex c1);

Complex operator /(int A1);

Complex operator /(double A1);

friend istream& operator >> (istream& in, Complex& c1);

friend ostream& operator << (ostream& out, Complex c1);

};

Complex::Complex()

{r = 0; i = 0;}

Complex::Complex(double x)

{ r = x; i=0; }

Complex::Complex(double a, double b)

{this->r = a; this->i = b;}

//Complex::Complex(Complex &c)

//{r = c.r; i = c.i; }

void Complex::setReal(double x)

{ r=x;}

void Complex::setIm(double y)

{ i=y;}

double Complex::getReal()

{ return r; }

double Complex::getIm()

{ return i;}

Complex Complex::operator +(Complex c1)

{

this->r += c1.r;

this->i += c1.i;

return (*this);

}

Complex Complex::operator +(int c1)

{ r = r+c1; i = c1+i; return(*this); }

Complex Complex::operator +(double c1)

{ r = c1+r; i = c1+i; return(*this); }

Complex Complex::operator -(Complex c1)

{

this->r -= c1.r;

this->i -= c1.i;

return (*this);

}

Complex Complex::operator -(int c1)

{ r = r-c1; i = i-c1; return(*this); }

Complex Complex::operator -(double c1)

{ r = r-c1; i = i-c1; return(*this); }

Complex Complex::operator *(Complex c1)

{

Complex temp;

temp.r = r*c1.r-i*c1.i;

temp.i = r*c1.i+c1.r*i;

return(temp);

}

Complex Complex::operator *(int c1)

{ r = r*c1; i = c1*i; return(*this); }

Complex Complex::operator *(double c1)

{ r = c1*r; i = c1*i; return(*this); }

Complex Complex::operator /(Complex c1)

{

Complex temp;

temp.r = r/c1.r-i/c1.i;

temp.i = r/c1.i+c1.r/i;

return(temp);

}

Complex Complex::operator /(int c1)

{ r = r/c1; i = c1/i; return(*this); }

Complex Complex::operator /(double c1)

{ r = c1/r; i = c1/i; return(*this); }

istream& operator >> (istream& in, Complex& c1)

{

cout<<"\ninputkan bagian real: ";
cin>>c1.r;
cout <<"inputkan bag imaginer: ";
cin>>c1.i;

return in;

}

ostream& operator << (ostream& out, Complex c1)

{

if (c1.i!=0.0 && c1.r!=0.0)

cout << c1.r <<" + "<<c1.i<<"i";

else if (c1.i != 0.0)

out << c1.i;

else

out << c1.r <<"i";

return out;

}

int main()

{

Complex A(2,3), B, C;
cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
cout<<"Program Akar Kuadrat Imajiner"<<endl;
cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

cout <<"Inputkan bil komplek: "; cin >> B;

cout << "\nBil komplek ke-1: "; cout << A << endl;

cout << "bil komplek ke-2: "; cout << B << endl;

C = B+A;

cout << "\nPenjumlahan 1: "; cout << C << endl;

C = B+2;

cout << "Penjumlahan 2: "; cout << C << endl;

C = B+2.5;

cout << "Penjumlahan 3: "; cout << C << endl;

C = B-A;

cout << "\nPengurangan 1: "; cout << C << endl;

C = B-2;

cout << "Pengurangan 2: "; cout << C << endl;

C = B-2.5;

cout << "Pengurangan 3: "; cout << C << endl;

C = B*A;

cout << "\nPerkalian 1: "; cout << C << endl;

C = B*2;

cout << "Perkalian 2: "; cout << C << endl;

C = B*2.5;

cout << "Perkalian 3: "; cout << C << endl;

C = B/A;

cout << "\nPembagian 1: "; cout << C << endl;

C = B/2;

cout << "Pembagian 2: "; cout << C << endl;

C = B/2.5;

cout << "Pembagian 3: "; cout << C << endl;

system("pause");
return 0;
}
