#include<iostream>
using namespace std;

int main(){
    float radius, pi=3.14;

    //Masukkan radius
    cout<<"Masukkan radius lingkaran:";
    cin>>radius;

    //Luas = pi * radius * radius
    float luas = pi*radius*radius;
    
    //Keluarkan Luas
    cout<<"Luas lingkaran adalah "<<luas<<endl;

    return 0;

    //Selesai;
}
