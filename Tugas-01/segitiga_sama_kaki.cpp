#include <iostream>
using namespace std;

int main() {
    float alas, tinggi, luas;

    // Menampilkan judul program
    cout << "Program Menghitung Luas Segitiga Sama Kaki\n";
    cout << "==========================================\n";
    cout << "Rumus: Luas = 0.5 x alas x tinggi\n\n";

    // Meminta input panjang alas
    cout << "Masukkan panjang alas (cm): ";
    cin >> alas;

    // Meminta input tinggi
    cout << "Masukkan tinggi segitiga (cm): ";
    cin >> tinggi;

    // Validasi input
    if (alas < 0 || tinggi < 0) {
        cout << "Error: alas dan tinggi tidak boleh negatif!\n";
    } else {
        // Menghitung luas segitiga
        luas = 0.5 * alas * tinggi;

        // Menampilkan hasil
        cout << "Luas segitiga sama kaki = " << luas << " cm²\n";
    }

    // Pesan penutup
    cout << "Program selesai, terima kasih.\n";

    return 0;
}
