#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=0;
	cout<<"Masukkan bilangan bulat n: ";
	cin>>n; //User akan menginputkan bilangan bulat
	
	//Perulangan for akan membangkitkan perkalian n dari 1 hingga 10
	for(int i=1;i<=10;i++){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
	return 0;
}
