#pragma once
#include <iostream>
#include <string>

using namespace std;

class Printer {

private:

    string brand;
    string model;

public:

    Printer(const string& brand, const string& model);

    void Print() const;
};