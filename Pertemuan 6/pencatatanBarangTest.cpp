#include<iostream>
#include<fstream>  // Library untuk file handling
using namespace std;

// Inisialisasi struct dengan 4 variabel yaitu kode, nama, harga, dan jumlah.
// Struct ini akan digunakan untuk menyimpan informasi tentang barang.
struct data {
    string kode;    // Menyimpan kode barang
    string nama;    // Menyimpan nama barang
    int harga;      // Menyimpan harga barang
    int jumlah;     // Menyimpan jumlah barang
};

int main() {
    // Deklarasi array barang yang dapat menampung hingga 50 barang.
    data barang[50]; 
    // n untuk jumlah barang, jumlahBarangTotal untuk menghitung total barang, totalHarga untuk menjumlahkan harga barang.
    int n, jumlahBarangTotal = 0, totalHarga = 0;  

    // Membuka file input.txt untuk membaca data
    ifstream inputFile("input.txt");
    
    // Jika file input.txt tidak dapat dibuka, tampilkan pesan error dan hentikan program
    if (!inputFile) {
        cout << "File tidak ditemukan!" << endl;
        return 1;
    }

    // Membaca jumlah barang dari file input.txt
    inputFile >> n;
     // Menampilkan jumlah barang yang dibaca dari file
    cout << "Masukkan jumlah barang: " << n << endl; 

    // Validasi jumlah barang agar berada dalam rentang yang diperbolehkan, yaitu 0 hingga 50.
    if (n > 50 || n < 0) {
        // Jika jumlah barang tidak valid, program dihentikan.
        cout << "Masukkan tidak valid." << endl;  
        return 1;
    }

    // Loop untuk membaca data barang dari file dan menampilkannya ke layar
    for (int i = 0; i < n; i++) {
        inputFile >> barang[i].kode;  // Membaca kode barang dari file
        inputFile >> ws;  // Menghapus whitespace sebelum membaca nama barang
        getline(inputFile, barang[i].nama);  // Membaca nama barang yang mungkin mengandung spasi
        inputFile >> barang[i].harga;  // Membaca harga barang dari file
        inputFile >> barang[i].jumlah;  // Membaca jumlah barang dari file

        // Menampilkan hasil input yang dibaca dari file
        cout << "Masukkan kode barang ke-" << i + 1 << " : " << barang[i].kode << endl;
        cout << "Masukkan nama barang ke-" << i + 1 << " : " << barang[i].nama << endl;
        cout << "Masukkan harga barang ke-" << i + 1 << " : " << barang[i].harga << endl;
        cout << "Masukkan jumlah barang ke-" << i + 1 << " : " << barang[i].jumlah << endl;
        cout << endl;

        // Menghitung total jumlah barang dan total harga
        jumlahBarangTotal += barang[i].jumlah;
        totalHarga += barang[i].harga;
    }

    // Menutup file setelah selesai membaca
    inputFile.close();

    // Output hasil perhitungan total barang dan rata-rata harga barang
    cout << "Jumlah semua barang adalah " << jumlahBarangTotal << endl;
    cout << "Rata-rata harga barang adalah Rp" << totalHarga / n << endl << endl;

    // Bagian testing: periksa apakah hasil sesuai dengan nilai yang diharapkan
    int expected_jumlahTotal = 31;  // Nilai jumlah barang yang diharapkan
    int expected_rata = 6940;  // Nilai rata-rata harga yang diharapkan

    // Cek apakah jumlah total barang dan rata-rata harga sesuai dengan yang diharapkan
    if (jumlahBarangTotal != expected_jumlahTotal || (totalHarga / n) != expected_rata) {
         // Jika tidak sesuai, tampilkan pesan kesalahan
        cout << "Test case doesn't match expected output" << endl; 
    } else {
        // Jika sesuai, tampilkan pesan keberhasilan
        cout << "Test case match the expected output" << endl;  
    }
    return 0;
}
