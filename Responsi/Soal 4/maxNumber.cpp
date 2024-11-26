#include<iostream>
using namespace std;

int main(){
    int banyakData;

    //Masukkan jumlah data  
    cout<<"Masukkan banyak data: "; 
    cin>>banyakData;
    cout<<endl;

    //Cek apakah input valid
    if(banyakData<=0){
        cout<<"Input tidak valid"<<endl;
        return 0;
    }

    //Inisialisasi array integer dengan jumlah data sebanyak banyakData
    int bilangan[banyakData];

    //Masukkan data
    for(int i=0; i<banyakData;i++){
        cout<<"Masukkan data ke-"<<i+1<<": ";
        cin>>bilangan[i];
    }

    //Inisialisasikan nilaiMax dengan elemen pertama pada array bilangan
    int nilaiMax=bilangan[0];

    //Perbarui nilaiMax jika ditemukan nilai yang lebih besar pada daftar 
    for(int i = 1; i < banyakData; i++){
        if(bilangan[i]>nilaiMax) nilaiMax = bilangan[i];
    }

    //Cetak nilai maks
    cout<<"\nNilai maksimum dalam daftar adalah "<<nilaiMax<<endl;

    return 0;
}