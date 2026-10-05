// Tugas Algoritma dan Pemrograman Array 2 Dimensi dengan menggunakan
// tipe data primitif dan tipe data buatan

// Nama     : Michael Audrey Baday
// NPM      : 140810260087

// Dibuat tanggal       : 01/10/2026, pukul 17.45 WIB
// Selesai              : 02/10/2026, pukul 05.24 WIB

// Penjelasan singkat tentang program ini:
// Program ini adalah program simulasi array 2 dimensi (matriks) dengan ukuran 3x3.
// Program ini menggunakan tipe data primitif (int) untuk menyimpan elemen-elemen matriks
// dan tipe data buatan (typedef) untuk mendefinisikan tipe data Matriks2D.
// Program ini menampilkan elemen-elemen matriks dan menghitung total penjumlahan seluruh
// elemen matriks.

#include <iostream>

typedef int Matriks2D[3][3];

void printMatriks(Matriks2D& matriks) {
    int jumlahTotal = 0;
    std::cout << "=== SIMULASI ARRAY 2D (MATRIKS 3x3) ===\n";
    std::cout << "Elemen Matriks: \n";
    
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            std::cout << matriks[baris][kolom] << "\t";
            jumlahTotal += matriks[baris][kolom];
        }
        std::cout << "\n";
    }

    std::cout << "---------------------------------------------\n";
    std::cout << "Total Penjumlahan Seluruh Elemen Matriks: " << jumlahTotal << "\n";
}

int main() {
    Matriks2D matriks = {
        {2, 3, 5},
        {7, 11, 13},
        {17, 19, 23},
    };

    printMatriks(matriks);
    return 0;
}