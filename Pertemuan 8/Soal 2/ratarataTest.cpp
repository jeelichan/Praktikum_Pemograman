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
    int n = 5; // Menetapkan jumlah data ke 5 (hardcoded)
    cout << "Masukkan banyak data: ";
    cout << n << endl; // Menampilkan jumlah data yang sudah ditetapkan

    // Mendeklarasikan array `num` dengan 5 nilai yang sudah ditentukan
    float num[5] = { 100, 80, 84.5, 69, 77 };

    // Menampilkan setiap elemen dari array `num` dengan format yang sesuai
    for(int i = 0; i < n; i++) {
        cout << "Masukkan bilangan ke-" << i + 1 << ": "; 
        cout << num[i] << endl; // Menampilkan nilai dari elemen ke-i
    }

    // Memanggil fungsi `rataRata` untuk menghitung rata-rata dari array `num`
    // Dimulai dari indeks terakhir (n-1) dengan akumulator awal sum = 0
    float mean = rataRata(num, n, 0, n - 1);

    // Menampilkan hasil rata-rata
    cout << "Rata-rata dari data adalah " << mean << endl;
}
