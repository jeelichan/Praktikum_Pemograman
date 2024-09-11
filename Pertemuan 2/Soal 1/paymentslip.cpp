#include<iostream>
using namespace std;

int main(){
	string name;
	int gross_salary, tax, installment, insurance, net_salary;
	
	cout<<"Input Employee Name : "; getline(cin,name);
	cout<<"Input Gross Salary : Rp"; cin>>gross_salary;
	cout<<"Input Installment Fee : Rp"; cin>>installment;
	cout<<"Input Insurance Premium : Rp"; cin>>insurance;
	
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
