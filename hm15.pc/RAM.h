#pragma once
#include <iostream>
#include <string>

using namespace std;

class RAM {

private:

    int capacity;

public:

    void SetCapacity(int capacity);

    void Print() const;
};