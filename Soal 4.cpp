#include <iostream>
#include <iomanip>
using namespace std;

double hitungRataRata(int nilai[], int jumlah) {
    int total = 0;
    for (int i = 0; i < jumlah; i++) {
        total += nilai[i];
    }
    return (double)total / jumlah;
}

void tampilkanHasil(double rata) {
    cout << fixed << setprecision(2);
    cout << "Rata-rata: " << rata << endl;

    if (rata >= 70)
        cout << "Status   : LULUS" << endl;
    else
        cout << "Status   : TIDAK LULUS" << endl;
}

int main() {
    int jumlah;

    cout << "Masukkan jumlah nilai: ";
    cin >> jumlah;

    int nilai[jumlah]; 

    for (int i = 0; i < jumlah; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    double rata = hitungRataRata(nilai, jumlah);

    tampilkanHasil(rata);

    return 0;
}

