#include <iostream>
#include <string>

class vehicle {
    std::string make;
    std::string model;
    public:
    vehicle():make("N.A"),model("N.A"){}
    vehicle(std::string in1,std::string in2);
    vehicle(vehicle &other):make(other.make),model(other.model){}

    void disp()
    {
        std::cout<<"Make: "<<make<<std::endl<<"Model: "<<model<<std::endl;
    }
};
class car : public vehicle{
    int door;
    public:
    car():vehicle(),door(4){}
    car(int in1);
    car(std::string i1,std::string i2,int i3):vehicle(i1,i2),door(i3){}
    car(car& ref):vehicle(ref),door(ref.door){}
    void cardisp()
    {
        disp();
        std::cout<<"Door: "<<door<<std::endl;
    }
};
car::car(int in1)
{
    car::vehicle();
    door = in1;
}
vehicle::vehicle(std::string in1,std::string in2)
{
    make = in1;
    model = in2;
}

int main()
{
    vehicle v1;
    v1.disp();
    vehicle v2("Benz","AMG");
    v2.disp();
    car c1;
    c1.cardisp();
    car c2("Bugati","Chiron",4);
    c2.cardisp();
}