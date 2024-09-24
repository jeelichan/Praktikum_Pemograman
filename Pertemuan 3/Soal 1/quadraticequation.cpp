#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	//Solving Quadratic Equation
	
	double a,b,c;
	
	//Input the value of a,b and c
	cout<<"ax^2+bx+c=0\n";
	cout<<"a= ";cin>>a;
	cout<<"b= ";cin>>b;
	cout<<"c= ";cin>>c;
	
	//Find the value of d
	double d=b*b-(4*a*c);

	if(d>0){
		//If d is bigger than zero, the equation has two real solutions.
		double ans1, ans2;
		ans1=(-b+sqrt(d))/(2*a);
		ans2=(-b-sqrt(d))/(2*a);
		cout<<"The solutions are x="<<ans1<<" and x="<<ans2;
	}
	else if(d==0){
		//if d is equal to 0, the equation has one real solutions.
		double ans;
		ans=-b/(2*a);
		cout<<"The solution is x="<<ans;
	}
	else{
		//if d is lees than 0, the equation don't have real solution.
		cout<<"There is no real solution for this equation.";
	}
}
