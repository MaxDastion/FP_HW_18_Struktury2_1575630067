#include <iostream>
#include <vector> 
using namespace std;
#pragma region MyRegion


struct Complex {
    double real; 
    double imag; 
};



Complex operator+(const Complex& a, const Complex& b) {
    Complex res;
    res.real = a.real + b.real;
    res.imag = a.imag + b.imag;
    return res;
}


Complex operator-(const Complex& a, const Complex& b) {
    Complex res;
    res.real = a.real - b.real;
    res.imag = a.imag - b.imag;
    return res;
}

Complex operator*(const Complex& a, const Complex& b) {
    Complex res;
    res.real = a.real * b.real - a.imag * b.imag;
    res.imag = a.real * b.imag + a.imag * b.real;
    return res;
}


Complex operator/(const Complex& a, const Complex& b) {
    Complex res;
    double denominator = b.real * b.real + b.imag * b.imag;
    res.real = (a.real * b.real + a.imag * b.imag) / denominator;
    res.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    return res;
}
#pragma endregion
#pragma region MyRegion

struct Car {
    double length;       
    double clearance;    
    double engineVolume; 
    int enginePower;     
    double wheelDiameter;
    std::string color;   
    std::string transmissionType; 
};
void setLength(Car& car, double len) {
    car.length = len;
}

void setClearance(Car& car, double clr) {
    car.clearance = clr;
}

void setEngineVolume(Car& car, double vol) {
    car.engineVolume = vol;
}

void setEnginePower(Car& car, int pwr) {
    car.enginePower = pwr;
}

void setWheelDiameter(Car& car, double dia) {
    car.wheelDiameter = dia;
}

void setColor(Car& car, std::string clr) {
    car.color = clr;
}

void setTransmissionType(Car& car, std::string type) {
    car.transmissionType = type;
}
vector<Car> findCarsByEnginePower(const std::vector<Car>& cars, int enginePower) {
    std::vector<Car> result;

    for (const auto& car : cars) {
        if (car.enginePower == enginePower) {
                        result.push_back(car);
        }
    }

    return result;
}
#pragma endregion



void main() {
    Complex a = { 1.0, 9.0 };
    Complex b = { 3.0, -5.0 };

    Complex temp = a + b;
    cout << "Sum: " << temp.imag <<','<< temp.real << endl;
    temp = a - b;
    cout << "DifF: " << temp.imag <<','<< temp.real << endl;
    temp = a * b;
    cout << "Prod: " << temp.imag <<','<< temp.real << endl;
    temp = a / b;
    cout << "Quot: " << temp.imag <<','<< temp.real << endl;
}