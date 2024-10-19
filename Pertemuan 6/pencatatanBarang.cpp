#include<iostream>
using namespace std;

// Inisialisasi struct dengan 4 variabel yaitu kode, nama, harga, dan jumlah.
// Struct ini akan digunakan untuk menyimpan informasi tentang barang.
struct data{
    string kode;    // Menyimpan kode barang
    string nama;    // Menyimpan nama barang
    int harga;      // Menyimpan harga barang
    int jumlah;     // Menyimpan jumlah barang
};

int main(){
    // Deklarasi array barang yang dapat menampung hingga 50 barang.
    data barang[50];  
    // n untuk jumlah barang, jumlahBarangTotal untuk menghitung total barang, totalHarga untuk menjumlahkan harga barang.
    int n, jumlahBarangTotal=0, totalHarga=0; 
    
    cout<<"Masukkan jumlah barang: ";  
    cin>>n;  // Input jumlah barang yang akan diolah.
    
    // Validasi input agar jumlah barang berada dalam rentang yang diperbolehkan, yaitu 0 hingga 50.
    while(n>50 || n<0){  
        cout<<"Masukkan tidak valid.\n";  // Pesan error jika input di luar rentang.
        cout<<"Silahkan masukkan angka 0-50: ";  // Meminta pengguna memasukkan nilai yang valid.
        cin>>n;
    }
    
    // Loop untuk mengambil data setiap barang sesuai dengan jumlah barang (n) yang diinput pengguna.
    for(int i=0;i<n;i++){
        // Meminta pengguna memasukkan kode barang.
        cout<<"Masukkan kode barang ke-"<<i+1<<": ";
        cin>>barang[i].kode;  // Simpan kode barang di array barang ke-i.
        
        // Meminta pengguna memasukkan nama barang. getline digunakan untuk menghindari masalah input dengan spasi.
        cout<<"Masukkan nama barang ke-"<<i+1<<": ";
        getline(cin>>ws, barang[i].nama);  // Menggunakan getline agar bisa membaca input dengan spasi setelah menggunakan cin.
        
        // Meminta pengguna memasukkan harga barang.
        cout<<"Masukkan harga barang ke-"<<i+1<<": ";
        cin>>barang[i].harga;  // Simpan harga barang di array barang ke-i.
        
        // Meminta pengguna memasukkan jumlah barang.
        cout<<"Masukkan jumlah barang ke-"<<i+1<<": ";
        cin>>barang[i].jumlah;  // Simpan jumlah barang di array barang ke-i.
        cout<<endl;  // Baris baru untuk kejelasan tampilan output.
        
        // Menambahkan jumlah barang ke dalam variabel jumlahBarangTotal.
        jumlahBarangTotal += barang[i].jumlah;  
        
        // Menambahkan harga barang ke dalam variabel totalHarga.
        totalHarga += barang[i].harga;
    }
    
    // Output total jumlah barang yang diinputkan pengguna.
    cout<<"Jumlah semua barang adalah "<<jumlahBarangTotal<<endl;
    
    // Output rata-rata harga barang. Rata-rata dihitung dengan membagi total harga dengan jumlah barang (n).
    cout<<"Rata-rata harga barang adalah Rp"<<totalHarga/n<<endl;
}

