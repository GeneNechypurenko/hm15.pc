#include "Processor.h"

void Processor::SetBrand(const string brand)
{
    this->brand = brand;
}

void Processor::SetModel(const string model)
{
    this->model = model;
}

void Processor::SetCores(int cores)
{
    this->cores = cores;
}

void Processor::SetStreams(int streams)
{
    this->streams = streams;
}

void Processor::SetCache(int cache)
{
    this->cache = cache;
}

void Processor::SetFrequency(int frequency)
{
    this->frequency = frequency;
}

void Processor::Print() const {

   cout << "Processor: " << brand << " " << model << ":\n" << cores << " cores/" << streams << " streams, " << cache << "MB, " << frequency << "HHz" << endl;
}
