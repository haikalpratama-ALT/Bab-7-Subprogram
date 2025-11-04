#include <iostream>
#include <iomanip> 
using namespace std;

int totalHadir = 0;

void tambahKehadiran(int hadir) {
    totalHadir += hadir; 
}

double hitungPersentase(int jumlahMahasiswa, int totalPertemuan) {
    int totalMaksimal = jumlahMahasiswa * totalPertemuan; 
    double persentase = (double)totalHadir / totalMaksimal * 100;
    return persentase;
}

void tampilkanHasil(int jumlahMahasiswa, int totalPertemuan) {
    int totalMaksimal = jumlahMahasiswa * totalPertemuan;
    double persentase = hitungPersentase(jumlahMahasiswa, totalPertemuan);

    cout << "\nTotal kehadiran kelas : " << totalHadir << " dari " << totalMaksimal << endl;
    cout << fixed << setprecision(2);
    cout << "Persentase kehadiran  : " << persentase << " %" << endl;
}

int main() {
    int jumlahMahasiswa, totalPertemuan, hadir;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    cout << "Masukkan total pertemuan: ";
    cin >> totalPertemuan;

    for (int i = 1; i <= jumlahMahasiswa; i++) {
        cout << "Kehadiran mahasiswa ke-" << i << ": ";
        cin >> hadir;
        tambahKehadiran(hadir); 
    }

    tampilkanHasil(jumlahMahasiswa, totalPertemuan);
    return 0;
}

