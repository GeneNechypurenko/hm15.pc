#include <iostream>
#include <string>

#include "Processor.h"
#include "RAM.h"
#include "GraphicCard.h"
#include "Webcam.h"
#include "Mouse.h"
#include "Printer.h"

using namespace std;

class Laptop {

private:

    string brand;
    string model;

    Processor processor;
    RAM ram;
    GraphicsCard graphicsCard;
    Webcam webcam;

    Mouse* mouse;
    Printer* printer;

public:

    Laptop(const string brand, const string model, Mouse* mouse, Printer* printer);

    void SetProcessor(const string brand, const string model, int cores, int streams, int cache, int frequency);
    void SetRam(int capacity);
    void SetGraphicsCard(const string brand, const string model);
    void SetWebcam(const string resolution);

    void Print() const;
};