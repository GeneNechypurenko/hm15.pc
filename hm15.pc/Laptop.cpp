#include "Laptop.h"

Laptop::Laptop(const string brand, const string model, Mouse* mouse, Printer* printer)
    :
    brand(brand),
    model(model),
    mouse(mouse),
    printer(printer)
{}

void Laptop::SetProcessor(const string brand, const string model, int cores, int streams, int cache, int frequency)
{
    processor.SetBrand(brand);
    processor.SetModel(model);
    processor.SetCores(cores);
    processor.SetStreams(streams);
    processor.SetCache(cache);
    processor.SetFrequency(frequency);
}

void Laptop::SetRam(int capacity)
{
    ram.SetCapacity(capacity);
}

void Laptop::SetGraphicsCard(const string brand, const string model)
{
    graphicsCard.SetBrand(brand);
    graphicsCard.SetModel(model);
}

void Laptop::SetWebcam(const string resolution)
{
    webcam.SetResolution(resolution);
}

void Laptop::Print() const {

    cout << "Laptop: " << brand << " " << model << endl;
    processor.Print();
    ram.Print();
    graphicsCard.Print();
    webcam.Print();
    mouse->Print();
    printer->Print();
}
