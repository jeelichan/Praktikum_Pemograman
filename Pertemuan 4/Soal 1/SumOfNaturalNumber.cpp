#include<bits/stdc++.h>
using namespace std;

int main(){
	//Program untuk menghitung jumlah bilangan asli dari 1 hingga n
	int n=0, hasil=0;

	cout<<"Masukkan bilangan asli n: ";
	cin>>n;//User memasukkan input sebuah bilangan asli

	//Menghitung hasil penjumlahan bilangan asli dari 1 hingga n menggunakan perulangan for
	for(int i=1;i<=n;i++) hasil+=i;

	//Output hasil yang telah diperoleh
	cout<<"Hasil = "<<hasil<<endl;
	return 0;
}
