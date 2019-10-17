/*

Runtime polymorphism: This type of polymorphism is achieved by Function Overriding.
Function overriding on the other hand occurs when a derived class has a definition for one of the member functions
of the base class. That base function is said to be overridden.

*/

#include <iostream>
using namespace std;

// Base class Vehicle
class Vehicle {
    public :
        virtual void print() {
            cout << "Base class Vehicle" << endl;
        }

        void show()
        { 
            cout<< "show Base class" <<endl; 
        }


};

// Derived class Car
class Car : public Vehicle {
    public :
        void print() {
            cout << "Derived class Car" << endl;
        }

        void show()
        { 
            cout<< "show Derived class" <<endl; 
        }
};


int main() {
    Car c;
    Vehicle *v2;

    v2 = &c;
    v2 -> print();
    v2->show();

}