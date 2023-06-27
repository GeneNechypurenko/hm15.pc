
#include "GraphicCard.h"

void GraphicsCard::SetBrand(const string brand)
{
    this->brand = brand;
}

void GraphicsCard::SetModel(const string model)
{
    this->model = model;
}

void GraphicsCard::Print() const {

    cout << "Graphics Card: " << brand << " " << model << endl;
}
