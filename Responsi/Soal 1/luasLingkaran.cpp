#include<iostream>
using namespace std;

int main(){
    float radius, pi=3.14;

    //Masukkan radius
    cout<<"Masukkan radius lingkaran:";
    cin>>radius;

    //Cek apakah input valid atau tidak
    if(radius<0){
        cout<<"Input tidak valid"<<endl;
        return 0;
    }

    //Luas = pi * radius * radius
    float luas = pi*radius*radius;
    
    //Keluarkan Luas
    cout<<"Luas lingkaran adalah "<<luas<<endl;

    return 0;

    //Selesai;
}
