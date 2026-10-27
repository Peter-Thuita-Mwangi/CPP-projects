//Employee Bonus system
#include<iostream>
#include<string>
using namespace std;
int main(){
string name;
double basic_salary;
double  Bonus, Total_salary;

//prompting user to enter details
int i = 1;
do {cout << "Enter employee name: " <<endl;
    cin>> name;
    cout << "Enter basic salary: " <<endl;
    cin>> basic_salary, Bonus, Total_salary;

    //calculating bonus
    Bonus = 0.05 * basic_salary;

    //calculating Total Salary
    Total_salary = basic_salary + Bonus;

    //displaying a report of each employee
 cout << "\n========Employee========" << i << "====Details====" <<endl;
 cout << "Name: " <<name <<endl;
 cout << "Basic Salary: " <<basic_salary <<endl;
 cout << "Bonus: " <<Bonus <<endl;
 cout << "Total Salary: " <<Total_salary <<endl;

    ++i;}
    while (i<=5);


 return 0;
 }
