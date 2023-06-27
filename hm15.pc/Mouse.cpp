#include "Mouse.h"

Mouse::Mouse(const string brand, const string model)
    : brand(brand), model(model) {}


void Mouse::Print() const {

    cout << "Mouse: " << brand << " " << model << endl;
}