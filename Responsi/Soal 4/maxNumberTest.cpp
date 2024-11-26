#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> bilangan={5,10,11,15,60,-10,34,22};
    int banyakData=8;

    cout<<"Masukkan banyak data: "<<banyakData<<endl<<endl;
    
    int bilangan[8]={5,10,11,15,60,-10,34,22};

    for(int i = 0; i < banyakData; i++){
        cout<<"Masukkan data ke-"<<i+1<<": ";
        cout<<bilangan[i]<<endl;
    }

    int nilaiMax = bilangan[0];

    for(int i = 1; i < banyakData; i++){
        if(bilangan[i]>nilaiMax) nilaiMax = bilangan[i];
    }

    cout<<"\nNilai maksimum dalam daftar adalah "<<nilaiMax<<endl;
    
    return 0;
}