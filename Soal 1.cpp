//C ke F (c*9/5)+32
#include <iostream>
#include <iomanip>
using namespace std;

double fahrenheit(double suhu){
	return suhu*1.8+32;
}
double kelvin(double suhu){
	return suhu+273.15;
}
int main() {
	int jml;
	int suhu[4];
	
	cout << "Masukkan jumlah data suhu: ";
	cin >> jml;
	cout << "Masukkan suhu ke-1 (Celcius): ";
	cin >> suhu[0];
	cout << "Masukkan suhu ke-2 (Celcius): ";
	cin >> suhu[1];
	cout << "Masukkan suhu ke-3 (Celcius): ";
	cin >> suhu[2];
	cout << "Masukkan suhu ke-4 (Celcius): ";
	cin >> suhu[3];
	
	cout << setw(5) << "Celcius   " << setw(5) << "fahrenheit" << setw(10) << "kelvin" << endl;
	cout << "____________" << endl;
	cout << setw(5) << suhu[0];
	cout << setw(5) << fahrenheit(suhu[0]);
	cout << setw(5) << kelvin(suhu[0])<< endl;
	cout << setw(5) << suhu[1];
	cout << setw(5) << fahrenheit(suhu[1]);
	cout << setw(5) << kelvin(suhu[1])<< endl;
	cout << setw(5) << suhu[2];
	cout << setw(5) << fahrenheit(suhu[2]);
	cout << setw(5) << kelvin(suhu[2])<< endl;
	cout << setw(5) << suhu[3];
	cout << setw(5) << fahrenheit(suhu[3]);
	cout << setw(5) << kelvin(suhu[3])<< endl;
	return 0;
}



