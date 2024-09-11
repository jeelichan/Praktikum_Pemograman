#include<bits/stdc++.h>
using namespace std;

int main(){
	int bil,terbesar;
	
	cout<<"Input bilangan pertama :";
	cin>>bil; 
	terbesar=bil;
	
	cout<<"Input bilangan kedua :";
	cin>>bil;
	if(bil>terbesar) terbesar=bil;
	
	cout<<"Input bilangan ketiga :";
	cin>>bil;
	if(bil>terbesar) terbesar=bil;
	
	cout<<"Bilangan terbesar adalah "<<terbesar;
	
	return 0;
}
