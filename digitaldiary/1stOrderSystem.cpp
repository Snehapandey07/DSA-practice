#include <iostream>
#include <fstream>
using namespace std;

int main() {
    double tau = 2.0;       // Time constant
    double dt = 0.01;       // Time step
    double t_final = 10.0;  // Simulation time

    double y = 0.0;         // Initial output
    double u = 1.0;         // Step input

    ofstream file("response.txt");

    for (double t = 0; t <= t_final; t += dt) {
        file << t << " " << y << endl;

        // dy/dt = (u - y) / tau
        double dydt = (u - y) / tau;

        // Euler update
        y = y + dt * dydt;
    }

    file.close();

    cout << "Simulation complete. Data saved to response.txt\n";
    return 0;
}