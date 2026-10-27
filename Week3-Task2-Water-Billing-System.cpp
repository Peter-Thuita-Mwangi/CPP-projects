//Water Billing System
#include<iostream>
#include<string>
using namespace std;

//global variables
string customer_name;
double units_consumed, BillafterDiscount, rateperUnit, discount, amountPayerble, billBeforDiscount, Bill ;

//prompting user to enter details
void getCustomerDetails(){
cout<< "Enter customer name: " <<customer_name <<endl;
cin>> customer_name;
cout<< "Enter Number of units consumed: " <<units_consumed <<endl;
cin >> units_consumed;}

//calculating the water bill
double CalculateBill()
{ cout<< "Enter Rate Per Unit: " <<endl;
cin>> rateperUnit;
    Bill = units_consumed * rateperUnit;
    amountPayerble= Bill;

    return amountPayerble;}

//giving out 10% discount if units_consumed > 100
 double applyDiscount(){
     billBeforDiscount = Bill;
 if (units_consumed>=100)
    { discount = Bill * 0.1;
    BillafterDiscount= Bill - discount ;}


 else
 {BillafterDiscount = Bill;}
 amountPayerble = BillafterDiscount;
 return BillafterDiscount, billBeforDiscount, amountPayerble;
 }

 //displaying user's bill
 void displayBill(){
 cout << " ===============Bill================ " <<endl;
 cout << "Customer Name: " <<customer_name <<endl;
 cout << "Number of Units Consumed: " <<units_consumed <<endl;
 cout << "Total Bill Before Discount: " <<billBeforDiscount <<endl;
 cout << "Discount Given: " <<discount <<endl;
 cout<< " Bill After Discount: " <<BillafterDiscount <<endl;
 cout << " Final Amount Payable: " <<amountPayerble <<endl;}

 //main function
 int main() {
 getCustomerDetails();
 CalculateBill();
 applyDiscount();
 displayBill();

 return 0;
 }
