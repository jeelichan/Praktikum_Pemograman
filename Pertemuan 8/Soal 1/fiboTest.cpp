#include<iostream>
using namespace std;

int fibo(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
 
int main(){
    int X=10;
    cout<<"Masukkan bilangan bulat positif:";
    cout<<X<<endl;
    cout<<"Bilangan fibonaci ke-"<<X<<" adalah "<<fibo(X)<<endl;
    return 0;
}
