#include<iostream>
using namespace std;

int main(){
	string name;
	int gross_salary, tax, installment, insurance, net_salary;
	
	//Input employee's name, gross salary, installment, and insurance
	cout<<"Input Employee Name : "; getline(cin,name);
	cout<<"Input Gross Salary : Rp"; cin>>gross_salary;
	cout<<"Input Installment Fee : Rp"; cin>>installment;
	cout<<"Input Insurance Premium : Rp"; cin>>insurance;
	
	//Initialize the value of tac and net salary
	tax=gross_salary*0.2;
	net_salary=gross_salary-tax-installment-insurance;
	
	//Print all of the data 
	cout<<"\nPlayslip for Employee"<<"\n-----------------------";
	cout<<"\nName : "<<name;
	cout<<"\nGross Salary : Rp "<<gross_salary;
	cout<<"\nTax (20%) : Rp"<<tax;
	cout<<"\nInstallment : Rp"<<installment;
	cout<<"\nInsurance : Rp"<<insurance;
	cout<<"\nNet Salary : Rp"<<net_salary;
	
}
