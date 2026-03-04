#include <iostream>
using namespace std;

int main() {
    double y = 20;      // initial temperature
    double r = 25;      // setpoint
    double a = 0.1;     // system constant
    double b = 1.0;
    double dt = 0.1;

    for (int i = 0; i < 200; i++) {
        double e = r - y;
        double u;

        if (e > 0)
            u = 1;   // ON
        else
            u = 0;   // OFF

        y = y + dt * (-a*y + b*u);

        cout << "Time: " << i*dt 
             << "  Temp: " << y 
             << "  Control: " << u << endl;
    }

    return 0;
}