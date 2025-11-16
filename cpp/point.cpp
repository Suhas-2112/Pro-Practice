#include <iostream>


class suhas
{
    int a;
    int b;
    public:
    suhas():a(1),b(2){std::cout<<"con is called \n";}
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
    suhas(int s,int g)
    {
        a = s;
        b = g;
    }
    ~suhas()
    {
        std::cout<<"Dis is called \n";
    }
};

int main()
{
    suhas gg;
    std::cout<<gg.geta()<<" "<<gg.getb()<<std::endl;
    suhas hh(3,4);
    std::cout<<hh.geta()<<" "<<hh.getb()<<std::endl;
    suhas *jj = new suhas;
    std::cout<<jj->geta()<<" "<<jj->getb()<<std::endl;
    delete jj;

    return 0;
}