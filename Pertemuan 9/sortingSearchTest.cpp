#include <iostream>
#include <vector>
using namespace std;

struct siswa {
    string nisn;
    string nama;
    double nilai;
};

// Fungsi Insertion Sort
vector<siswa> insertionSort(vector<siswa> data, int option) {
    int n = data.size();
    for (int i = 1; i < n; i++) {
        siswa key = data[i];
        int j = i - 1;
        while (j >= 0 && ((option == 1 && data[j].nisn > key.nisn) || (option == 2 && data[j].nilai > key.nilai))) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
    return data;
}

// Fungsi Selection Sort
vector<siswa> selectionSort(vector<siswa> data, int option) {
    int n = data.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if ((option == 1 && data[j].nisn < data[minIndex].nisn) || (option == 2 && data[j].nilai < data[minIndex].nilai)) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
    return data;
}

// Fungsi Bubble Sort
vector<siswa> bubbleSort(vector<siswa> data, int option) {
    int n = data.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((option == 1 && data[j].nisn > data[j + 1].nisn) || (option == 2 && data[j].nilai > data[j + 1].nilai)) {
                swap(data[j], data[j + 1]);
            }
        }
    }
    return data;
}

// Fungsi Binary Search
void binarySearch(vector<siswa> data, const string &nisn) {
    data = insertionSort(data, 1); // Pastikan data terurut berdasarkan NISN
    int kiri = 0, kanan = data.size() - 1;
    int ditemukan = -1;

    while (kiri <= kanan) {
        int tengah = kiri + (kanan - kiri) / 2;
        if (data[tengah].nisn == nisn) {
            ditemukan = tengah;
            break;
        } else if (data[tengah].nisn < nisn) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }

    if (ditemukan != -1) {
        cout << "\nSiswa dengan NISN " << data[ditemukan].nisn << " ditemukan!\n";
        cout << "Nama  : " << data[ditemukan].nama << endl;
        cout << "Nilai : " << data[ditemukan].nilai << endl;
    } else {
        cout << "\nSiswa dengan NISN " << nisn << " tidak ditemukan!" << endl;
    }
}

// Fungsi Ubah Nama
void ubahNama(vector<siswa> &data, double nilai, const string &namaBaru) {
    int ditemukan = -1;
    for (int i = 0; i < data.size(); i++) {
        if (data[i].nilai == nilai) {
            ditemukan = i;
            break;
        }
    }

    if (ditemukan != -1) {
        data[ditemukan].nama = namaBaru;
        cout << "Nama berhasil diubah menjadi " << data[ditemukan].nama << "!" << endl;
    } else {
        cout << "Nilai tidak ditemukan!" << endl;
    }
}

// Fungsi Menu Pengurutan
void sortingTest(vector<siswa> &data) {
    vector<siswa> sortedData;
    int optAlgo, optSort;
    for(int i = 1; i <= 3; i++){
        optAlgo = i;
        for(int j = 1; j <= 2; j++ ){
            optSort = j;
            cout << "\nSilahkan pilih algoritma:\n";
            cout << "1. Insertion Sort\n2. Selection Sort\n3. Bubble Sort\n";
            cout << "Masukkan pilihan: ";
            cout << optAlgo << endl;

            cout << "\nUrutkan data berdasarkan:\n1. NISN\n2. Nilai\n";
            cout << "Masukkan pilihan: ";
            cout << optSort << endl;

            switch (optAlgo) {
                case 1:
                    sortedData = insertionSort(data, optSort);
                    break;
                case 2:
                    sortedData = selectionSort(data, optSort);
                    break;
                case 3:
                    sortedData = bubbleSort(data, optSort);
                    break;
                default:
                    cout << "Pilihan tidak valid!" << endl;
                    return;
            }

            cout << "\nData setelah diurutkan:\n";
            for (int i = 0; i < sortedData.size(); i++) {
                cout << "NISN: " << sortedData[i].nisn << ", Nama: " << sortedData[i].nama << ", Nilai: " << sortedData[i].nilai << endl;
            }
        }
    }
        
}

// Fungsi Menu Pencarian
void searchingTest(vector<siswa> &data) {
    string targetNISN = "9950310962";
    cout << "Masukkan NISN yang akan dicari: ";
    cout << targetNISN;
    binarySearch(data, targetNISN);
}

// Fungsi Ubah Nama Data
void ubahNamaTest(vector<siswa> &data) {
    double targetNilai=60;
    string namaBaru="Joko";
    cout << "Masukkan nilai yang ingin diubah namanya: ";
    cout << targetNilai << endl;
    cout << "Masukkan nama yang baru: ";
    cout << namaBaru << endl;

    ubahNama(data, targetNilai, namaBaru);
}

int main() {
    vector<siswa> data = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9966539389", "Arief Budiman", 60}
    };

    int opt = -1;
    for(int i = 1; i <= 3; i++) {
        opt = i;
        cout << "\nPilih menu:\n";
        cout << "1. Urutkan data\n2. Pencarian data berdasarkan NISN\n3. Ubah nama pemilik nilai\n0. Keluar\n";
        cout << "Masukkan pilihan: ";
        cout << opt << endl;

        switch (opt) {
            case 1:
                sortingTest(data);
                break;
            case 2:
                searchingTest(data);
                break;
            case 3:
                ubahNamaTest(data);
                break;
            case 0:
                cout << "Terima kasih, sampai jumpa!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    }
    return 0;
}
