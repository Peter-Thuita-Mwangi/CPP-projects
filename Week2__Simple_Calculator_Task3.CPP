//Simple Calculator using switch statement
#include<iostream>
using namespace std;
int main(){
    double results;
    double number1;
    double number2;
    //Taking input from user
    cout<<"Enter first number: " <<endl;
    cin>>number1;
    cout<<"Enter second number: " <<endl;
    cin>>number2;
    char symbol1;
    cout<<"Enter the symbol of operation you want to perform: " <<endl;
    cin>> symbol1 ;
    //using switch statement to perform operations
    switch(symbol1){
case '+':
results = number1 + number2;
cout<<"The result of addition is: "<<results <<endl;
break;
case '-':
results = number1 - number2;
cout<<"The results of subtraction is : "<<results <<endl;
break;
case'*':
results = number1 * number2;
cout<<"The results of multiplication is : "<<results <<endl;
break;
case '/':
if (number2 == 0) //handling division by zero
{cout<< "Division by zero is not allowed" <<endl;}
else
{results = number1 / number2;
cout<<"The results of division is : "<<results <<endl;}
break;
default:
cout<<"Invalid operation symbol" ;
    } return 0;
}
