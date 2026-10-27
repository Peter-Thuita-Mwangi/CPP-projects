//Payroll_System.cpp
#include<iostream>
#include<string>

using namespace std;
//Global variables
string Employee_name;
double basicSalary, overtimeHours,  rateperHour;
double OvertimePay, NetSalary ;

// defining function and prompting user to enter details

void getEmployeeDetails()
{cout<< "Enter Employee name "  <<endl;
getline(cin, Employee_name);
cout<<"Enter basic salary " <<endl;
cin>> basicSalary;
cout<<"Enter overtime hours " <<endl;
cin>> overtimeHours;}


//calculating overtime pay
double calculateOvertimePay()
{cout<< "Enter rate per hour " <<endl;
cin>> rateperHour;
  OvertimePay = overtimeHours * rateperHour;
return OvertimePay;}


//calculating net salary
double calculateNetSalary()
{NetSalary = basicSalary + OvertimePay;
return NetSalary;}

//displaying payslip
void displayPayslip()
{cout<< "=========Pay Slip Details======== " <<endl;
 cout<< "Name: " <<Employee_name <<endl;
 cout<< "basic Salary: "  <<basicSalary <<endl;
 cout<< "over time Hours: " <<overtimeHours <<endl;
 cout<< "rate per Hour: " <<rateperHour <<endl;
 cout<< "over timePay: "<<OvertimePay <<endl;
 cout<< "Net Salary: " <<NetSalary <<endl;}

int main()
//calling all the function
{getEmployeeDetails();
calculateOvertimePay();
calculateNetSalary();
displayPayslip();

return 0;}
