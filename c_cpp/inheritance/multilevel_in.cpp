#include <iostream>
#include <string>

// Base class: Vehicle
class Vehicle
{
private:
    std::string make;
    std::string model;

public:
    // Function to set vehicle details
    Vehicle() : make("N.A."), model("N.A.") {}
    Vehicle(std::string ip1, std::string ip2)  : make(ip1), model(ip2) {}
    Vehicle(const Vehicle& ref) : make(ref.make), model(ref.model) {}  

    // Function to display vehicle details
    void display()
    {
        std::cout << "Make: " << make << ", Model: " << model << std::endl;
    }
};

// Derived class: Car inheriting from Vehicle
class Car : public Vehicle
{
private:
    // footprint of Vehicle class data members
    int numDoors;

public:
    // footprint of Vehicle class member functions
    // Different constructors to set Car details including base class detail
    Car() : Vehicle(), numDoors(4){}
    Car(int ip1) : Vehicle(), numDoors(ip1){}
    Car(std::string ip1, std::string ip2, int ip3) : Vehicle(ip1, ip2), numDoors(ip3) {}
    Car(const Car& ref) : Vehicle(ref), numDoors(ref.numDoors) {}

    // Function to display Car details including base class details
    void displayCarDetails()
    {
        display(); // Reusing base class function
        std::cout << "Doors: " << numDoors << std::endl;
    }
    // Additional functionalities specific to Car can be added here
};

// Further derived class: ElectricCar inheriting from Car
class ElectricCar : public Car
{
private:
    // footprint of Vehicle and Car class data members
    int batteryCapacity;

public:    
    // footprint of Vehicle and Car class member functions
    // Different constructors to set ElectricCar details including base class detail
    ElectricCar() : Car(), batteryCapacity(100) {}
    ElectricCar(std::string ip1, std::string ip2, int ip3, int ip4) : Car(ip1, ip2, ip3), batteryCapacity(ip4) {}
    ElectricCar(const ElectricCar& ref) : Car(ref), batteryCapacity(ref.batteryCapacity) {}

    // Function to display ElectricCar details including base class and Car class details
    void displayElectricCarDetails()
    {
        displayCarDetails(); // Reusing Car class function
        std::cout << "Battery Capacity: " << batteryCapacity << " kWh" << std::endl;
    }
};

// Main function
int main()
{
    // Creating an instance of Car
    ElectricCar myECar1;
    ElectricCar myECar2("BMW", "X3", 4, 120);
    ElectricCar myECar3(myECar2);

    std::cout << "ECar 1 Details:" << std::endl;
    myECar1.displayElectricCarDetails(); // Calling function specific to the Electric Car class
    std::cout << "\nECar 2 Details:" << std::endl;
    myECar2.displayElectricCarDetails(); // Calling function specific to the Electric Car class
    std::cout << "\nECar 3 Details:" << std::endl;
    myECar3.displayElectricCarDetails(); // Calling function specific to the Electric Car class

    return 0;
}