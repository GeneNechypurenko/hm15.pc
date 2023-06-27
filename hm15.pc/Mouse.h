#pragma once
#include <iostream>
#include <string>

using namespace std;

class Mouse {

private:
    string brand;
    string model;

public:

    Mouse(const string brand, const string model);

    void Print() const;
};