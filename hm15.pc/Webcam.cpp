#include "Webcam.h"

void Webcam::SetResolution(const string resolution)
{
    this->resolution = resolution;
}

void Webcam::Print() const {

    cout << "Webcam: " << resolution << endl;
}
