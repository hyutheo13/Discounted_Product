#include "DiscountedProduct.h"
#include <iostream>

using namespace std;


DiscountedProduct::DiscountedProduct(string _id, string _name, double _price, double _discountRate)
    : Product(_id, _name, _price) {
    discountRate = _discountRate;
}


double DiscountedProduct::tinhGiaBan() {
    return price * (1.0 - discountRate);
}


void DiscountedProduct::display() {
    cout << "Ma SP: " << id << " | Ten SP: " << name
        << " | Gia goc: " << price
        << " | Ty le giam: " << (discountRate * 100) << "%"
        << " | Gia ban thuc te: " << tinhGiaBan() << endl;
}