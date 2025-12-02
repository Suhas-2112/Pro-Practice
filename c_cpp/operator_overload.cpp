#include <iostream>

class Complex
{
    int real;
    int img;
    public:
    Complex():real(0),img(0){}

    Complex(int a,int b):real(a),img(b){}

    Complex operator+(const Complex &ref)
    {
        int treal = real+ref.real;
        int timg = img+ref.img;
        return Complex(treal,timg);
    }
        
    void disp()
    {
        std::cout<<real<<"+"<<img<<"i"<<std::endl;
    }
};
int main()
{
    Complex obj1(2,3);
    Complex obj2(1,2);
    Complex obj3;
    obj3 = obj1 + obj2;
    obj1.disp();
    obj2.disp();
    obj3.disp();

}
