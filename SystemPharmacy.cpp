#include "SystemPharmacy.h"
#include <iostream>
#include <vector>

using namespace std;

SystemPharmacy::SystemPharmacy(){

    saveCustomer(this->listCustomer);
    saveProduct(this->hashmap);
}

void SystemPharmacy::saveCustomer(ListCustomer& listCustomer) {

    // Opening the file
    ifstream arch("Customer.txt");

    // File verification
    if (!arch.is_open()) {
        cout << "ERROR!!! NO SE ENCONTRO EL ARCHIVO" << endl;
        return;
    }

    string line;

    string part;
    vector<string> parts;

    string name;
    int age;
    string rut;
    string disabled;
    string pregnant;

    while (getline(arch, line)) {

        stringstream ss(line);
        
        while (getline(ss, part, ';')) {

            parts.push_back(part);

        }

        name = parts[0];
        age = stoi(parts[1]);
        rut = parts[2];
        disabled = parts[3];
        pregnant = parts[4];

        if (age > 60) {

            Customer* customer = new ThirdAge(name,rut,age,disabled,pregnant);
            listCustomer.addThirdAge(customer);

        } else if (disabled == "true") {

            Customer* customer = new Disabled(name,rut,age,disabled,pregnant);
            listCustomer.addDisabled(customer);

        } else if (pregnant == "true") {

            Customer* customer = new Pregnant(name,rut,age,disabled,pregnant);
            listCustomer.addPregnant(customer);

        } else {

            Customer* customer = new Customer(name,rut,age,disabled,pregnant);
            listCustomer.addCustomer(customer);

        }

        parts.clear();

    }

}

void SystemPharmacy::saveProduct(HashMap hashmap) {

    // Opening the file
    ifstream arch("Product.txt");

    // File verification
    if (!arch.is_open()) {
        cout << "ERROR!!! NO SE ENCONTRO EL ARCHIVO" << endl;
        return;
    }

    string line;

    string part;
    vector<string> parts;

    string name;
    string category;
    string id;
    string subCategory;
    string type;
    int price;
    int numProducts;

    

    while (getline(arch, line)) {

        

        stringstream ss(line);
        
        while (getline(ss, part, ';')) {

            parts.push_back(part);

        }

        cout<<"hola prueba123";

        id = parts[0];
        category = parts[1];
        subCategory = parts[2];
        type = parts[3];
        name = parts[4];

        price = stoi(parts[5]);
        cout<<"antes del cambio"<<endl;
        cout<<name<<endl;

        numProducts = stoi(parts[6]);

        cout<<"Despues del cambio";

        if (category == "medicine") {

            Product* product = new Medicine(name,id,subCategory,type,price,numProducts,category);
        
            hashmap.insert(name,product);
        

        } else if (category == "babyproduct") {

            Product* product = new BabyProduct(name,id,subCategory,type,price,numProducts,category);
            this->hashmap.insert(name,product);

        } else if (category == "medicalequipmentandsupplies") {

            Product* product = new MedEquipSupp(name,id,subCategory,type,price,numProducts,category);
            this->hashmap.insert(name,product);

        } else if (category == "personalcare") {

            Product* product = new ProductCare(name,id,subCategory,type,price,numProducts,category);
            this->hashmap.insert(name,product);

        } else if (category == "supplementandvitamins") {

            Product* product = new SuppVit(name,id,subCategory,type,price,numProducts,category);
            this->hashmap.insert(name,product);

        }

        parts.clear();

    }

}

void SystemPharmacy::nextCustomer(ListCustomer& listCustomer,HashMap& hashmap) {

    Customer* presentCustomer = listCustomer.getNextCustomer();
    vector<Product*> shoppinCar;
    string nameProduct;

    cout << "\n\n---------- Cliente actual ----------\n";
    cout << "Nombre: " << presentCustomer->getName() << "\n\n";
    cout << "Ingrese el nombre del producto o 'fin' para terminar: ";
    cin >> nameProduct;

    while (nameProduct != "fin") {

        if (hashmap.search(nameProduct) != nullptr) {

            hashmap.search(nameProduct)->subtractProduct();
            shoppinCar.push_back(hashmap.search(nameProduct));
            cout << "\nProducto en el carrito :)\n\n";

        } else {

            cout << "\nProducto no encontrado, asegurate de ingresar correctamente el nombre :) ";
            cout << "o puede que no este almacenado en la bodega\n";
        }

        cout << "Ingrese el nombre del producto o 'fin' para terminar: ";
        cin >> nameProduct;
    }

    cout << "\n\n---------- BOLETA ----------";
    cout << "\n---------------------------\n";

    int price = 0;

    for(Product *product:shoppinCar){

        cout << product->getName() << " - Precio: " << product->getPrice() << "\n";
        price+=product->getPrice();

    }
    
    cout << "\n\nTOTAL: " << price << "\n";
    cout << "---------------------------\n\n";
}

void SystemPharmacy::newCustomer(ListCustomer& listCustomer) {

    string name;
    string rut;
    int age;
    int input;

    cout << "Ingrese el nombre del nuevo cliente: ";
    cin >> name;
    cout << "Ingrese el RUT del nuevo cliente: ";
    cin >> rut;
    cout << "Ingrese la edad del nuevo cliente: ";
    cin >> age;

    if (age > 60) {

        ThirdAge* newCustomer = new ThirdAge(name, rut, age,"false","false");
        listCustomer.addThirdAge(newCustomer);
        
    } else {

        cout << "¿El cliente es discapacitado? (1=si, 2=no): ";
        cin >> input;
        
        if (input == 1) {

            Disabled* newCustomer = new Disabled(name, rut, age,"true","false");
            listCustomer.addDisabled(newCustomer);
        } else {

            cout << "¿El cliente está embarazada? (1=si, 2=no): ";
            cin >> input;

            if (input == 1) {

                Pregnant* newCustomer = new Pregnant(name, rut, age,"false","true");
                listCustomer.addPregnant(newCustomer);

            } else {

                Customer* newCustomer = new Customer(name, rut, age,"false","false");
                listCustomer.addCustomer(newCustomer);
            }
        }
    }

    cout << "\nNuevo cliente agregado exitosamente!\n";
}

void SystemPharmacy::productSearchMenu(HashMap& hashmap) {

    string productName;
    string exitKeyword;

    while (true) {
        cout << "\n---------- MENU DE BUSQUEDA DE PRODUCTOS ----------\n";
        cout << "Ingrese el nombre del producto o 'salir' para terminar: ";
        cin >> productName;

        if (productName == "salir") {
            break;
        }

        Product* product = hashmap.search(productName);

        if (product != nullptr) {
            cout << "\nProducto encontrado:\n";
            cout << "Nombre: " << product->getName() << "\n";
            cout << "ID: " << product->getId() << "\n";
            cout << "Subcategoria: " << product->getSubCategory() << "\n";
            cout << "Tipo: " << product->getType() << "\n";
            cout << "Precio: " << product->getPrice() << "\n";
            cout << "Cantidad en stock: " << product->getNumProducts() << "\n";
        } else {
            cout << "\nProducto no encontrado.\n";
        }
    }

    cout << "\nSaliendo del menu de busqueda de productos.\n";
}

void SystemPharmacy::printAllProducts(HashMap& hashmap) {

    vector<Product*> allProducts = hashmap.getAllProducts();

    cout << "\n---------- TODOS LOS PRODUCTOS EN BODEGA ----------\n";

    for (Product* product : allProducts) {
        cout << "\n\n--------------------------------------------------\n";
        cout << "Nombre: " << product->getName() << "\n";
        cout << "ID: " << product->getId() << "\n";
        cout << "Subcategoria: " << product->getSubCategory() << "\n";
        cout << "Tipo: " << product->getType() << "\n";
        cout << "Precio: " << product->getPrice() << "\n";
        cout << "Cantidad en stock: " << product->getNumProducts() << "\n";
        cout << "--------------------------------------------------\n";
    }
    cout << "\n--------------------------------------------------\n";
}

void SystemPharmacy::addProductToHashMap(HashMap& hashmap) {

    string name;
    string id;
    string subCategory;
    string type;
    int price;
    int numProducts;
    int productType;
    string category;

    cout << "\nSeleccione el tipo de producto a agregar:\n";
    cout << "1. Productos para bebe\n";
    cout << "2. Suplementos\n";
    cout << "3. Medicamentos\n";
    cout << "4. Cuidado Personal\n";
    cout << "5. Vitaminas\n";
    cout << "6. Ninguno de los anteriores (Product)\n";
    cin >> productType;

    cout << "Ingrese el nombre del producto: ";
    cin >> name;
    cout << "Ingrese el ID del producto: ";
    cin >> id;
    cout << "Ingrese la subcategoria del producto: ";
    cin >> subCategory;
    cout << "Ingrese el tipo del producto: ";
    cin >> type;
    cout << "Ingrese el precio del producto: ";
    cin >> price;
    cout << "Ingrese la cantidad en stock del producto: ";
    cin >> numProducts;

    Product* newProduct;

    switch (productType) {
        case 1:
            newProduct = new BabyProduct(name, id, subCategory, type, price, numProducts,"babyproduct");
            break;
        case 2:
            newProduct = new MedEquipSupp(name, id, subCategory, type, price, numProducts,"medicalequipmentandsupplies");
            break;
        case 3:
            newProduct = new Medicine(name, id, subCategory, type, price, numProducts,"medicine");
            break;
        case 4:
            newProduct = new ProductCare(name, id, subCategory, type, price, numProducts,"personalcare");
            break;
        case 5:
            newProduct = new SuppVit(name, id, subCategory, type, price, numProducts,"supplementandvitamins");
            break;
        case 6:

            cout<<"Ingrese la categoria del producto";
            cin >> category;

            newProduct = new Product(name, id, subCategory, type, price, numProducts,category);
            break;
        default:
            cout << "\nTipo de producto no valido. No se agrego ningun producto.\n";
            return;
    }

    hashmap.insert(name, newProduct);

    cout << "\nProducto agregado exitosamente!\n";
}

void SystemPharmacy::saveProductTxt(vector<Product*> listProduct){
    ofstream file;

    file.open("Product.txt",ios::out); //open the file

    if (file.fail())
    {
        cout<< "Error al abrir el archivo"<<endl;
        exit(1);
    }


    for (size_t i = 0; i < listProduct.size(); i++)
    {
        file<<listProduct[i]->getId()<<";"<<listProduct[i]->getCategory()<<";"<<listProduct[i]->getSubCategory()<<";"<<listProduct[i]->getType()
        <<";"<<listProduct[i]->getName()<<";"<<listProduct[i]->getPrice()<<";"<<listProduct[i]->getNumProducts()<<endl;
    }
}

void SystemPharmacy::saveCustomerTxt(ListCustomer& ListCustomer){

    queue<Customer*> listThirdAge = ListCustomer.getThirdAge();
    queue<Customer*> listDisabled = ListCustomer.getDisabled();
    queue<Customer*> listPregnant = ListCustomer.getPregnant();
    queue<Customer*> listCustomer = ListCustomer.getListCustomer();

    ofstream file;

    file.open("Customer.txt",ios::out); //open the file

    if (file.fail())
    {
        cout<< "Error al abrir el archivo"<<endl;
        exit(1);
    }

    while(!listDisabled.empty())
    {
        Customer* customer = listDisabled.front();

        file<<customer->getName()<<";"<<customer->getAge()<<";"<<customer->getRut()<<";"<<customer->getIfDisable()<<";"<<customer->getIfPregnant()<<endl;
    
        listDisabled.pop();
    }

    while(!listPregnant.empty())
    {
        Customer* customer = listPregnant.front();

        file<<customer->getName()<<";"<<customer->getAge()<<";"<<customer->getRut()<<";"<<customer->getIfDisable()<<";"<<customer->getIfPregnant()<<endl;
    
        listPregnant.pop();
    }

    while(!listThirdAge.empty())
    {
        Customer* customer = listThirdAge.front();

        file<<customer->getName()<<";"<<customer->getAge()<<";"<<customer->getRut()<<";"<<customer->getIfDisable()<<";"<<customer->getIfPregnant()<<endl;
    
        listThirdAge.pop();
    }

    while(!listCustomer.empty())
    {
        Customer* customer = listCustomer.front();

        file<<customer->getName()<<";"<<customer->getAge()<<";"<<customer->getRut()<<";"<<customer->getIfDisable()<<";"<<customer->getIfPregnant()<<endl;
    
        listCustomer.pop();
    }

}

void SystemPharmacy::menu() {

    bool exitOption = true;

    while (exitOption) {

        
        
        int option;

        cout << "\n\n---------- MENU ----------\n";
        cout << "1. Siguiente cliente\n";
        cout << "2. Ingresar cliente a la fila\n";
        cout << "3. Revisar producto en bodega\n";
        cout << "4. Ver todos los productos en bodega\n";
        cout << "5. Agregar producto a la bodega\n";
        cout << "6. Terminar y guardar\n";
        cout << "\n--------------------------\n";

        cin >> option;

        while (option < 0 && option < 6) {

            cout << "\nERROR !!!\n";
            cout << "Ingresa una opcion valida\n";

            cin >> option;
        }

        switch (option)
        {
        case 1:
            
            nextCustomer(listCustomer,hashmap);

            break;
        
        case 2:
            
            newCustomer(listCustomer);
            break;
        
        case 3:
            
            productSearchMenu(hashmap);
            break;
        
        case 4:
            
            printAllProducts(hashmap);
            break;

        case 5:
        
            addProductToHashMap(hashmap);
            break;
        
        case 6:
        
            exitOption = false;
            break;
        
        default:
            break;
        }

        saveProductTxt(hashmap.getAllProducts());
        saveCustomerTxt(this->listCustomer);
        
    }
    

}





