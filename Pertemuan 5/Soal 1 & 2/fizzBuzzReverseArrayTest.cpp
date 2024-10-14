#include <iostream>   // Diperlukan untuk operasi input-output
#include <vector>     // Diperlukan untuk menggunakan vector
#include <string>     // Diperlukan untuk operasi string
#include <fstream>    // Diperlukan untuk operasi file
using namespace std;

// Problem 1: FizzBuzz with Vectors
// Urutan disimpan dalam vector string dan mencetak angka dari 1 hingga 100, dengan aturan:
// - "Fizz" untuk kelipatan 3.
// - "Buzz" untuk kelipatan 5.
// - "FizzBuzz" untuk kelipatan 3 dan 5.
// - Selain itu, cetak angka asli.
vector<string> fizzBuzz() {
    vector<string> result;  // Vector untuk menampung hasil FizzBuzz
    for (int i = 1; i <= 100; ++i) {
        // Jika angka kelipatan 3 dan 5, tambahkan "FizzBuzz"
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");
        }
        // Jika hanya kelipatan 3, tambahkan "Fizz"
        else if (i % 3 == 0) {
            result.push_back("Fizz");
        }
        // Jika hanya kelipatan 5, tambahkan "Buzz"
        else if (i % 5 == 0) {
            result.push_back("Buzz");
        }
        // Selain itu, tambahkan angka asli sebagai string
        else {
            result.push_back(to_string(i));  // Mengubah angka menjadi string
        }
    }
    return result;  // Mengembalikan vector string hasil FizzBuzz
}

// Problem 2: Reverse an Array
// Menerima vector integer sebagai input dan mengembalikan vector terbalik
vector<int> reverseArray(const vector<int>& input) {
    vector<int> result;  // Vector untuk menampung hasil array yang dibalik
    // Inisialisai i dengan panjang vektor-1 dan berhenti saat i>=0 tidak terpenuhi
    for (int i = input.size()-1; i>=0; i--) {
        result.push_back(input[i]);  // Menambah elemen dengan urutan terbalik
    }
    return result;  // Mengembalikan array terbalik
}

int main() {
    // Memanggil fungsi FizzBuzz untuk disimpan nilainya
    vector<string> fizzBuzzSequence = fizzBuzz(); 

    // Menampilkan urutan FizzBuzz ke layar
    cout << "FizzBuzz Sequence:" << endl;
    int index = 0;
    int length = fizzBuzzSequence.size();
    while (index < length) {
        // Cetak setiap elemen dari hasil FizzBuzz
        cout << fizzBuzzSequence[index] << endl;  
        index++;
    }

    // Membaca input dari file input.txt untuk pengujian ReverseArray
    ifstream inputFile("input.txt");  // Membuka file input.txt untuk dibaca
    vector<int> input;  // Menampung input dari file
    int num;
    while (inputFile >> num) {
        input.push_back(num);  // Menambahkan angka ke vector input
    }
    inputFile.close();  // Menutup file setelah selesai membaca

    // Panggil fungsi reverseArray untuk membalikkan array
    vector<int> reversed = reverseArray(input);  

    // Menampilkan array yang dibalik ke layar
    cout << "Reversed Array:" << endl;
    index = 0;
    length = reversed.size();
    while (index < length) {
        // Cetak elemen dari array terbalik
        cout << reversed[index] << " ";  
        ++index;
    }
    cout << endl;

    // Membandingkan hasil keluaran FizzBuzz dan ReverseArray dengan expected output
    cout << "Comparing output..." << endl;
    ifstream outputFile2("expected_output.txt");  // Membuka file expected_output.txt untuk membandingkan output
    string line;
    bool match = true;
    index = 0;
    // Loop melalui setiap baris file dan bandingkan dengan hasil FizzBuzz dan reverseArray
    while (getline(outputFile2, line)) {
        // Bandingkan setiap baris dengan hasil FizzBuzz
        if (index < fizzBuzzSequence.size() && line != fizzBuzzSequence[index]) {
            match = false;  // Jika hasil FizzBuzz tidak cocok dengan yang diharapkan
            break;
        }
        // Bandingkan setiap baris dengan hasil array terbalik
        if (index >= fizzBuzzSequence.size() && line != to_string(reversed[index - fizzBuzzSequence.size()])) {
            match = false;  // Jika hasil array terbalik tidak cocok dengan yang diharapkan
            break;
        }
        ++index;
    }
    outputFile2.close();  // Menutup file setelah perbandingan selesai

    // Menampilkan hasil perbandingan
    if (match) {
        cout << "Output matches expected output." << endl;
    } else {
        cout << "Output does not match expected output." << endl;
    }

    return 0;
}
