// Name: Mikeson Calixte
// Date: October 12, 2026
// ENGR 140 Week 6 Demo: Refactor into functions
#include <iostream>

// Function prototypes
double psiToKpa(double psi);
bool inTolerance(double pressure, double low, double high);
double avgCycles(int shift1, int shift2);
void boost(double& value);

int main() {
    double p1 = 98.4, p2 = 104.9;
    int shift1 = 14, shift2 = 17;

    std::cout << p1 << " psi = " << psiToKpa(p1) << " kPa\n";
    std::cout << p2 << " psi = " << psiToKpa(p2) << " kPa\n";

    if (inTolerance(p2, 97.0, 103.0))
        std::cout << "p2 OK\n";
    else
        std::cout << "p2 OUT OF TOLERANCE\n";

    // Prediction: the starter prints Avg cycles: 15 because of integer division.
    // Dividing by 2.0 keeps the decimal, giving the correct average of 15.5.
    std::cout << "Avg cycles: " << avgCycles(shift1, shift2) << "\n";

    boost(p1);
    std::cout << "p1 doubled: " << p1 << "\n";
    return 0;
}

// Function definitions
double psiToKpa(double psi) {
    return psi * 6.89476;
}

bool inTolerance(double pressure, double low, double high) {
    return pressure >= low && pressure <= high;
}

double avgCycles(int shift1, int shift2) {
    return (shift1 + shift2) / 2.0;
}

void boost(double& value) {
    value = value * 2;
}
