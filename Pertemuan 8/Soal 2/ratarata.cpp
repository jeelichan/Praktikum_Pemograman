#include<bits/stdc++.h>
using namespace std;

// Fungsi rekursif untuk menghitung rata-rata dari array `x`
// x[] : array yang berisi data
// n : jumlah elemen dalam array
// sum : akumulator untuk penjumlahan elemen
// i : indeks saat ini dalam array, mulai dari akhir (n-1)
float rataRata(float x[], int n, float sum, int i) {
    if (i < 0) // Kondisi penghentian: jika indeks kurang dari 0, kembalikan hasil rata-rata
        return sum / n;
    else // Rekursif untuk menambahkan elemen saat ini `x[i]` ke `sum` dan mengurangi indeks `i`
        return rataRata(x, n, sum + x[i], i - 1);
}

int main() {
    int n;
    cout << "Masukkan banyak data: ";
    cin >> n; // Meminta pengguna memasukkan jumlah data

    float num[n]; // Mendeklarasikan array `num` untuk menyimpan data
    for(int i = 0; i < n; i++) {
        cout << "Masukkan bilangan ke-" << i + 1 << ": "; 
        cin >> num[i]; // Meminta input elemen array dari pengguna
    }

    // Memanggil fungsi rataaRata untuk menghitung rata-rata dari array `num`
    // Dimulai dari indeks terakhir (n-1) dengan akumulator awal sum = 0
    float mean = rataRata(num, n, 0, n - 1);

    // Menampilkan hasil rata-rata
    cout << "Rata-rata dari data adalah " << mean << endl;
}
