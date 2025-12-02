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
    
Complex add(const Complex &r2) {  // c1.add(c2)
    int treal = real + r2.real; // this->m_real + ref.m_real
    int timag = img + r2.img;
    //Complex temp(treal, timag);
    //return temp;
    return Complex(treal,timag);
  }

  Complex multiply(const Complex &r2) {
    //(a + ib) (c + id) = (ac - bd) + i(ad + bc)
    int treal = (real*r2.real - img*r2.img);
    int timg = (real*r2.img + img*r2.real);
    return Complex(treal,timg);
  }

  Complex subtract(const Complex &r2) {
    int treal = r2.real - real;
    int timg = r2.img - img;
    return Complex(treal,timg);
  }

  bool equals(const Complex &r2) { // c1.equals(c2)
    return real == r2.real && img == r2.img;
  }
};
Complex::Complex()
{
    real = 0;
    img = 0;
}

int main() {
  Complex c1(2, 3);
  Complex c2(4, 5);
  Complex c3, c4, c5;

  c3 = c1.add(c2); // add(c1,c2)
  c5 = c1.multiply(c2);

  if (c1.equals(c2)) // if(equals(c1,c2))
    std::cout << "yes\n";
  else
    std::cout << "no\n";
c1.display();
c2.display();
c3.display();
c4.display();
c5.display();


  return 0;
}