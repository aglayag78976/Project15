#pragma once
#ifndef CAR_H
#define CAR_H

class Car 
{
private:
    char* model;
    int year;
    double engineCapacity;

public:
    Car();
    Car(const char* model, int year, double engineCapacity);
    ~Car();

    const char* getModel() const;
    int getYear() const;
    double getEngineCapacity() const;

    void setModel(const char* model);
    void setYear(int year);
    void setEngineCapacity(double engineCapacity);

    void input();
    void print() const;
};

#endif // CAR_H
