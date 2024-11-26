#include<iostream>
using namespace std;

int main(){
    int banyakData;

    cout<<"Masukkan banyak data: "; 
    cin>>banyakData;
    cout<<endl;

    if(banyakData<=0){
        cout<<"Input tidak valid"<<endl;
        return 0;
    }

    int bilangan[banyakData];

    for(int i=0; i<banyakData;i++){
        cout<<"Masukkan data ke-"<<i+1<<": ";
        cin>>bilangan[i];
    }

    int nilaiMax=bilangan[0];

    for(int i = 1; i < banyakData; i++){
        if(bilangan[i]>nilaiMax) nilaiMax = bilangan[i];
    }


    cout<<"\nNilai maksimum dalam daftar adalah "<<nilaiMax<<endl;

    return 0;
}