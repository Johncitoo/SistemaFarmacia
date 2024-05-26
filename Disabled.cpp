#include "Disabled.h"
#include <iostream>

using namespace std;

Disabled::Disabled(string name,string rut,int age,string ifDisable,string ifPregnant) : Customer(name,rut,age,ifDisable,ifPregnant) {}

Disabled::~Disabled(){}