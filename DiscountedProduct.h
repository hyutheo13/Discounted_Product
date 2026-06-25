#pragma once
#include "Product(test).h"
//#include "Product.h"
#include <string>

class DiscountedProduct : public Product {
private:
    double discountRate;

public:
    DiscountedProduct(string _id, string _name, double _price, double _discountRate);

    double tinhGiaBan() override;

    void display() override;
};