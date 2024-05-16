#include <iostream>
#include "Product.cpp"

using namespace std;

class MedicalEquipmentAndSupplies : public Product {

    public:

    MedicalEquipmentAndSupplies(string,string,int);
    ~MedicalEquipmentAndSupplies();
};
