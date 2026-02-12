#include <iostream>
using namespace std;

int main() {
    float alas, tinggi, luas;  // variabel untuk menyimpan alas, tinggi, dan luas

    // Menampilkan judul program
    cout << "Program Menghitung Luas Jajar Genjang\n";
    cout << "=====================================\n";
    cout << "Rumus: Luas = alas x tinggi\n\n";

    // Meminta input panjang alas dari pengguna
    cout << "Masukkan panjang alas (cm): ";
    cin >> alas;

    // Meminta input tinggi dari pengguna
    cout << "Masukkan tinggi jajar genjang (cm): ";
    cin >> tinggi;

    // Mengecek apakah input bernilai negatif
    if (alas < 0 || tinggi < 0) {
        cout << "Error: alas dan tinggi tidak boleh negatif!\n";
    } else {
        // Menghitung luas jajar genjang
        luas = alas * tinggi;

        // Menampilkan hasil perhitungan
        cout << "Luas jajar genjang = " << luas << " cm²\n";
    }

    // Menampilkan pesan bahwa program telah selesai
    cout << "Program selesai, terima kasih.\n";

    return 0;  // Mengakhiri program
}