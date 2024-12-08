#include "Car.h"
#include <iostream>
#include <cstring>
using namespace std;

Car::Car() : model(nullptr), year(0), engineCapacity(0.0) 
{
    model = new char[8];
    strcpy(model, "Unknown");
    cout << "Default constructor\n";
}

Car::Car(const char* model, int year, double engineCapacity)
    : year(year), engineCapacity(engineCapacity) 
{
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
    cout << "Constructor with parameters\n";
}

Car::~Car() 
{
    if (model != nullptr) 
    {
        delete[] model;
    }
    cout << "Destructor\n";
}

const char* Car::getModel() const 
{
    return model;
}

int Car::getYear() const 
{
    return year;
}

double Car::getEngineCapacity() const 
{
    return engineCapacity;
}

void Car::setModel(const char* model) 
{
    if (this->model != nullptr) 
    {
        delete[] this->model;
    }
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
}

void Car::setYear(int year) 
{
    this->year = year;
}

void Car::setEngineCapacity(double engineCapacity) 
{
    this->engineCapacity = engineCapacity;
}

void Car::input() 
{
    char buffer[50];
    cout << "Enter model: ";
    cin >> buffer;
    setModel(buffer);
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter engine capacity: ";
    cin >> engineCapacity;
}

void Car::print() const 
{
    cout << "Model: " << model << "\nYear: " << year
        << "\nEngine Capacity: " << engineCapacity << "\n\n";
}
