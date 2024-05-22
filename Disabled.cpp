#include <iostream>
#include "Disabled.h"

using namespace std;

Disabled::Disabled(string name, int age, string rut) : Customer(name,age,rut) {}

Disabled::~Disabled(){}