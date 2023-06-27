#include "Printer.h"

Printer::Printer(const string& brand, const string& model)
    : brand(brand), model(model) {}

void Printer::Print() const {

    cout << "Printer: " << brand << " " << model << endl;
}
