#include <iostream>
#include "Customer.h"
using namespace std;

class Disabled : public Customer {

    public:

    Disabled(string,int);
    ~Disabled();

};