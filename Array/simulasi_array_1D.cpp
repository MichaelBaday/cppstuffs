// Tugas Algoritma dan Pemrograman Array 1 Dimensi dengan menggunakan
// tipe data primitif dan tipe data buatan

// Nama     : Michael Audrey Baday
// NPM      : 140810260087

// Dibuat tanggal       : 01/10/2026, pukul 14.55 WIB
// Selesai              : 01/10/2026, pukul 15.30 WIB

// Penjelasan singkat tentang program ini:
// Program ini merupakan simulasi penggunaan array 1 dimensi untuk menghitung
// nilai rata-rata (mean) dari daftar nilai siswa. Program ini menggunakan array
// 1 dimensi untuk menyimpan nilai-nilai siswa dan menghitung mean dari nilai-nilai
// tersebut. Hasil perhitungan mean kemudian ditampilkan bersama dengan daftar
// nilai siswa, jumlah siswa, dan total nilaidalam bahasa C++ dengan menggunakan
// tipe data primitif dan tipe data buatan.

#include <iostream>

typedef int arr1D[5];

void hitungMean(arr1D arr, int size, float &mean) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    mean = total / size;
}

void printAll(float mean, arr1D arr, int size) {
    std::cout << "=== Simulasai Array 1 Dimensi ===\n";
    std::cout << "Daftar nilai siswa:\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Siswa " << i + 1 << ": " << arr[i] << "\n";
    }
    std::cout << "===============================\n";
    std::cout << "Jumlah siswa: " << size << "\n";
    std::cout << "Total nilai: " << mean * size << "\n";
    std::cout << "Mean dari list ini adalah: " << mean << "\n";
}

int main() {
    arr1D nilai = {85, 90, 95,100, 80};
    float mean;

    hitungMean(nilai, 5, mean);
    printAll(mean, nilai, 5);

}