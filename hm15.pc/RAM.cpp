#include "RAM.h"

void RAM::SetCapacity(int capacity)
{
    this->capacity = capacity;
}

void RAM::Print() const {

    cout <<  "RAM: " << capacity << "GB" << endl;
}
