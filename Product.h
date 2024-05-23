#include <iostream>

using namespace std;

class Product {

    protected:

    string* name;
    string* id;
    string* subCategory;
    string* type;
    int* price;
    int* numProducts;

    public:

    Product(string*,string*, string*, string*, int*,int*);
    virtual ~Product();
};