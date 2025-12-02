#include <iostream>


class Complex{
    int real;
    int img;
public:
    Complex();
    Complex(int a,int b):real(a),img(b){}
    void display()
    {
        std::cout<<real<<"+"<<img<<"i"<<std::endl;
    }
    friend Complex add(const Complex &r1, const Complex &r2);
    //static Complex add(const Complex &r1, const Complex &r2);
};
Complex::Complex()
{
    real = 0;
    img = 0;
}
Complex add(const Complex &r1,const Complex &r2)
{
    int treal = r1.real + r2.real;
    int timg = r1.img + r2.img;
    return Complex(treal,timg);
}
int main() {
  Complex obj2(5,15);
  Complex obj1(10,20);

  Complex obj3 = add(obj1,obj2);
    //Complex obj3 = Complex::add(obj1,obj2);
    obj1.display();
    obj2.display();
    obj3.display();

  return 0;
}