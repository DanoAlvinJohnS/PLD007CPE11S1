#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function Computing Area of a cube
double cubeArea(double sideLength) {
    return sideLength * sideLength * sideLength;
}

// Function Calculating hypotenuse of a right triangle
double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

// Function Convert Fahrenheit to Celsius
double celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// Function Converting Celsius to Fahrenheit
double fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    // Compute the area of a cube
    double sideLength;
    cout << "Input the side length of the cube: ";
    cin >> sideLength;
    cout << "The area of the cube is: " << cubeArea(sideLength) << endl;

    // Compute the hypotenuse of a right triangle
    double sideA, sideB;
    cout << "\nEnter the lengths of the two sides of a right triangle:\n";
    cout << "Side A: "; cin >> sideA;
    cout << "Side B: "; cin >> sideB;
    cout << "The length of the hypotenuse is: " << hypotenuse(sideA, sideB) << endl;

    // Print Fahrenheit to Celsius chart
    cout << "\nFahrenheit to Celsius Table:\n";
    cout << setw(12) << "Fahrenheit" << setw(12) << "Celsius" << endl;
    for (int f = 32; f <= 212; f += 10) {
        cout << setw(12) << f << setw(12) << fixed << setprecision(2) << celsius(f) << endl;
    }

    // Print Celsius to Fahrenheit chart
    cout << "\nCelsius to Fahrenheit Table:\n";
    cout << setw(12) << "Celsius" << setw(12) << "Fahrenheit" << endl;
    for (int c = 0; c <= 100; c += 10) {
        cout << setw(12) << c << setw(12) << fixed << setprecision(2) << fahrenheit(c) << endl;
    }
    cout << endl;

    return 0;
}
