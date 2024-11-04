#include<bits/stdc++.h>
using namespace std;

int main(){
	int terbesar,a=1,b=-100,c=543;
	
	cout<<"Input bilangan pertama :"; cout<<a<<endl;
	terbesar=a;
	
	cout<<"Input bilangan kedua :"; cout<<b<<endl;
	if(b>terbesar) terbesar=b;
	
	cout<<"Input bilangan ketiga :"; cout<<c<<endl;
	if(c>terbesar) terbesar=c;
	
	cout<<"Bilangan terbesar adalah "<<terbesar<<endl;
	
	return 0;
}
