#include <iostream>
#include "Car.h"
using namespace std;

int main() 
{
    Car car1("Toyota", 2020, 2.5);
    car1.print();

    Car car2;
    car2.input();
    car2.print();

    return 0;
}
