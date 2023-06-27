#pragma once
#include <iostream>
#include <string>

using namespace std;

class Processor {

private:

    string brand;
    string model;
    int cores;
    int streams;
    int cache;
    int frequency;

public:

    void SetBrand(const string brand);
    void SetModel(const string model);
    void SetCores(int cores);
    void SetStreams(int streams);
    void SetCache(int cache);
    void SetFrequency(int frequency);

    void Print() const;
};