#include <iostream>
#include <string>

// Base class 1: Vehicle
class Vehicle {
private:
    std::string make;
    std::string model;

public:
    // Function to set vehicle details
    Vehicle() : make("N.A."), model("N.A.") {}
    Vehicle(std::string ip1, std::string ip2)  : make(ip1), model(ip2) {}
    Vehicle(const Vehicle& ref) : make(ref.make), model(ref.model) {}  
    // Function to display vehicle details
    void display() {
        std::cout << "Make: " << make << ", Model: " << model << std::endl;
    }
};

// Base class 2: Engine
class Engine {
private:
    int horsePower;

public:
    // Function to set vehicle details
    Engine() : horsePower(150) {}
    Engine(int hp) : horsePower(hp) {}
    Engine(const Engine& ref) : horsePower(ref.horsePower) {}  

    // Function to display engine details
    void displayEngineDetails() {
        std::cout << "Horsepower: " << horsePower << " HP" << std::endl;
    }
    // Additional functionalities specific to Engine can be added here
};

// Derived class: Car inheriting from Vehicle and Engine
class Car : public Vehicle, public Engine {
private:
    int numDoors;

public:
    // Different constructors to set Car details including base class detail
    Car() : Vehicle(), Engine(), numDoors(4){}
    Car(int ip1) : Vehicle(), Engine(), numDoors(ip1){}
    Car(std::string ip1, std::string ip2, int ip3, int ip4) : Vehicle(ip1, ip2), Engine(ip3), numDoors(ip4) {}
    Car(const Car& ref) : Vehicle(ref), Engine(ref), numDoors(ref.numDoors) {}
 
    // Function to display Car details including base class details
    void displayCarDetails() {
        display(); // Reusing Vehicle class function
        displayEngineDetails(); // Reusing Engine class function
        std::cout << "Doors: " << numDoors << std::endl;
    }
};


int main() {
    // Creating an instance of Car
    Car myCar1;
    Car myCar2(2);
    Car myCar3("BMW", "X3", 100, 4);
    Car myCar4(myCar3);

    std::cout << "Car 1 Details:" << std::endl;
    myCar1.displayCarDetails(); // Calling function specific to the Car class
    std::cout << "\nCar 2 Details:" << std::endl;
    myCar2.displayCarDetails(); // Calling function specific to the Car class
    std::cout << "\nCar 3 Details:" << std::endl;
    myCar3.displayCarDetails(); // Calling function specific to the Car class
    std::cout << "\nCar 4 Details:" << std::endl;
    myCar4.displayCarDetails(); // Calling function specific to the Car class
    return 0;

}