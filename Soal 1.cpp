#include <iostream>
#include <iomanip> 
using namespace std;

double Fahrenheit(double celcius) {
    return (celcius * 1.8) + 32.0;
}

double Kelvin(double celcius) {
    return celcius + 273.15;
}

int main() {
    int n;
    cout << "Masukkan jumlah data suhu: ";
    cin >> n;

    double celcius[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan suhu ke-" << i + 1 << " (Celcius): ";
        cin >> celcius[i];
    }

    cout << fixed << setprecision(2);
    cout << "\nCelcius\tFahrenheit\tKelvin" << endl;
    cout << "-----------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << setw(6) << celcius[i] << "\t"
             << setw(10) << Fahrenheit(celcius[i]) << "\t"
             << setw(8) << Kelvin(celcius[i]) << endl;
    }

    return 0;
}

