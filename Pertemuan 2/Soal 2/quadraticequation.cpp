#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	//Solving Quadratic Equation
	
	double a,b,c;
	
	cout<<"ax^2+bx+c=0\n";
	cout<<"a= ";cin>>a;
	cout<<"b= ";cin>>b;
	cout<<"c= ";cin>>c;
	
	double d=b*b-(4*a*c);
	cout<<endl<<d<<endl;
	if(d>0){
		double ans1, ans2;
		ans1=(-b+sqrt(d))/(2*a);
		ans2=(-b-sqrt(d))/(2*a);
		cout<<"The solutions are x="<<ans1<<" and x="<<ans2;
	}
	else if(d==0){
		double ans;
		ans=-b/(2*a);
		cout<<"The solution is x="<<ans;
	}
	else{
		cout<<"There is no real solution for this equation.";
	}
}
