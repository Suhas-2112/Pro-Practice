#include <iostream>
#include <vector>

class Point
{
    private:
    int x;
    int y;

    public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int a,int b) : x(a),y(b){}

    int getx()
    {
        return x;
    }
    void setx(int a)
    {
        x = a;
    }
    int gety()
    {
        return y;
    }
    void sety(int a)
    {
        y = a;
    }
    void print()
    {
        std::cout<<getx()<<" "<<gety()<<std::endl;
    }
};


int main()
{
    std::vector<Point> v(5);

    Point p1(10,20);
    Point p2(-11,-20);

    v.push_back(p1);
    v.emplace_back(33,44);

    std::vector<Point>::iterator itr= v.begin();
    std::advance(itr,3);
    std::cout<<"After advance"<<std::endl;
    v.emplace(itr,Point(55,66));
    std::cout<<"After advance emplace"<<std::endl;
    for(auto i:v)
    {
        i.print();
    }
    
}