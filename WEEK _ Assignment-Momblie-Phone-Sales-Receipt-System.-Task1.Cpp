
//Mobile Phone Sales Receipt System
#include<iostream>
using namespace std;

int main()
{
    string customer_name, phone_model;
    int quantity_bought;
    int price_per_phone,total_sales_amount;
    cout<< "Enter customer_name" <<"\n"; //prompting user to enter customer name
    cin>> customer_name;
    cout<< "Enter the phone_model" <<"\n"; //prompting user to enter phone model purchased
    cin>> phone_model;
    cout<< "Enter quantity_bought" <<"\n";  // prompting user to enter the number of phone(s) purchased
    cin>> quantity_bought;
    cout<< "Enter price_per_phone" <<"\n";   // prompting user to enter price of one phone
    cin>> price_per_phone;
    ----------------------------------------------------------
    total_sales_amount = quantity_bought*price_per_phone; // calculating the total cost of the phone(s)
    cout<< "coustomer_name "<< customer_name<<"\n"; // displaying customer name
    cout<<"phone_model "<<phone_model<<"\n";        // displaying phone model
    cout<<"quantity_bought "<<quantity_bought<<"\n"; // displaying quantity bought
    cout<<"price_per_phone "<<price_per_phone<<"\n"; // displaying price of a one phone
    cout<<"total sales amount " <<total_sales_amount<<"\n"; // displaying total sales amount
    return 0;

}
