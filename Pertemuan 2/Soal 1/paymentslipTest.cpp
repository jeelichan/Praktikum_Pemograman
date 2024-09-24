#include<iostream>
using namespace std;

int main(){
	string name="Elon Musk";
	int gross_salary=1000000, tax, installment=50000, insurance=35000, net_salary;
	
	cout<<"Input Employee Name : "<<name<<endl;
	cout<<"Input Gross Salary : Rp"<<gross_salary<<endl; 
	cout<<"Input Installment Fee : Rp"<<installment<<endl;
	cout<<"Input Insurance Premium : Rp"<<insurance<<endl;
	
	tax=gross_salary*0.2;
	net_salary=gross_salary-tax-installment-insurance;
	
	cout<<"\nPlayslip for Employee"<<"\n-----------------------";
	cout<<"\nName : "<<name;
	cout<<"\nGross Salary : Rp "<<gross_salary;
	cout<<"\nTax (20%) : Rp"<<tax;
	cout<<"\nInstallment : Rp"<<installment;
	cout<<"\nInsurance : Rp"<<insurance;
	cout<<"\nNet Salary : Rp"<<net_salary;
	
}
