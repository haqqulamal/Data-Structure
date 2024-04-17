#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> angka_genap;
    int jumlah_angka, angka;

    cout << "Masukkan jumlah angka genap yang ingin diinputkan: ";
    cin >> jumlah_angka;

    for (int i = 0; i < jumlah_angka; i++) {
        cout << "Masukkan angka genap ke-" << i+1 << ": ";
        cin >> angka;
        if (angka % 2 == 0) {
            angka_genap.push_back(angka);
        } else {
            cout << "Angka yang diinputkan harus genap." << endl;
            i--;  // Mengurangi counter untuk mengulang iterasi yang sama
        }
    }

    cout << "Daftar angka genap: ";
    for (int num : angka_genap) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}