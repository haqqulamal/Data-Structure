#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah baris: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Mencetak spasi sebelum angka
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Mencetak angka segitiga
        for (int j = 1; j <= i; j++) {
            cout << setw(2) << j << " ";
        }

        // Mencetak angka segitiga terbalik
        for (int j = i - 1; j >= 1; j--) {
            cout << setw(2) << j << " ";
        }

        cout << endl;
    }

    return 0;
}