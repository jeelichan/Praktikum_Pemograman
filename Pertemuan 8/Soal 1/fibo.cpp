#include<iostream>
using namespace std;

// Baris fibonacci 0, 1, 1, 2, 3, 5, 8, 13, dst 

int fibo(int n){
    // Base case baris fibonacci adalah disaat n=1 atau n=2.
    if(n==1) return 0;
    if(n==2) return 1;
    // Sedangkan recursive case dilakukan saat n>2, dengan pemanggilan fibo(n-1)+fibo(n-2).
    // Program pasti berhenti karena fibo(n-2) terkecil adalah pada saat n=1, yang mana case ini sudah tercover pada base case.
    return fibo(n-1) + fibo(n-2);
}
 
int main(){
    int X;
    cout<<"Masukkan bilangan bulat positif: ";
    cin>>X;
    cout<<"Bilangan fibonaci ke-"<<X<<" adalah "<<fibo(X)<<endl;
    return 0;
}
