#include <iostream>
#include <string>

#include "Laptop.h"

using namespace std;

int main() {

    Mouse mouse ("Logitech", "M185");
    Printer printer ("HP", "LaserJet");

    Laptop* laptop = new Laptop("ASUS", "M1603IA", &mouse, &printer);

    laptop->SetProcessor("AMD", "Ryzen 5 4600H", 6, 12, 11, 4);
    laptop->SetRam(12);
    laptop->SetGraphicsCard("AMD", "Radeon Graphics");
    laptop->SetWebcam("HD 720p");

    laptop->Print();

    delete laptop;

    cout << "_______________________________________________" << endl;

    mouse.Print();
    printer.Print();

    cout << "_______________________________________________" << endl;


    return 0;
}
