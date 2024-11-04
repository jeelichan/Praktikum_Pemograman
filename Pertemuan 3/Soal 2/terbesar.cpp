#include<bits/stdc++.h>
using namespace std;

int main(){
	int bil,terbesar;
	
    //Input bilangan pertama
	cout<<"Input bilangan pertama :";
	cin>>bil; 
	terbesar=bil;//Menjadikan bilangan pertama sebagai bilangan terbesar
	
    //Input bilangan kedua
	cout<<"Input bilangan kedua :";
	cin>>bil;
	if(bil>terbesar) terbesar=bil;
    //Jika bilangan kedua lebih besar dari var terbesar, maka terbesar sekarang adalah bilangan kedua
	
    //Input bilangan ketiga
	cout<<"Input bilangan ketiga :";
	cin>>bil;
	if(bil>terbesar) terbesar=bil;
    //Jika bilangan ketiga lebih besar dari var terbesar, maka terbesar sekarang adalah bilangan ketiga
	
    //Output bilangan terbesar
	cout<<"Bilangan terbesar adalah "<<terbesar<<endl;
	
	return 0;
}
