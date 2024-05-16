#include <iostream>
using namespace std;

class Product {

    protected:

    string name;
    string id;
    int price;

    public:

    Product(string,string,int);
    virtual ~Product();
};


