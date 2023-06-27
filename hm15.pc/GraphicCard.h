#pragma once
#include <iostream>
#include <string>

using namespace std;

class GraphicsCard {

private:

    string brand;
    string model;

public:

    void SetBrand(const string brand);
    void SetModel(const string model);

    void Print() const;
};