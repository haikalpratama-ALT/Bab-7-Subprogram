#include <iostream>
using namespace std;

void ByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void ByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "\nSebelum ditukar: a = " << a << ", b = " << b << endl;

    ByValue(a, b);
    cout << "Setelah tukarByValue : a = " << a << ", b = " << b << endl;

    ByReference(a, b);
    cout << "Setelah tukarByReference : a = " << a << ", b = " << b << endl;

    return 0;
}

