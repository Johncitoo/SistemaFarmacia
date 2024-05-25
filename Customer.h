#pragma once
#include <string>

class Customer {
protected:
    std::string name;
    int age;
    std::string rut;

public:
    Customer(std::string name, int age, std::string rut);
    virtual ~Customer();
};