#pragma once

#include <iostream>

#include <fstream>
#include <sstream>
#include <vector>

// Inclusion of father classes
#include "Customer.h"
#include "Product.h"


// Inclusion of "Product" classes
#include "BabyProducts.h"
#include "MedicalEquipmentAndSupplies.h"
#include "Medicines.h"
#include "PersonalCare.h"
#include "SupplementsAndVitamins.h"

// Inclusion of "customer" classes
#include "ThirdAge.h"
#include "Disabled.h"
#include "Pregnant.h"

// Inclusion of list
#include "ListCustomer.h"
#include "ListNodes.h"

using namespace std;

class SystemPharmacy {

    private:

    ListCustomer listCustomer;
    //ListNodes listProduct;

    public:

    // Read files

    void readCustomer(ListCustomer&);
    //void readProduct(ListNodes&);

    SystemPharmacy();
    ~SystemPharmacy();

    

    // MENU

    void menu(ListCustomer,ListNodes);

};