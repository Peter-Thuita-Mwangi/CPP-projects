//Saving Withdrawal system
#include<iostream>
#include<string>
using namespace std;
int main(){

double withdrawalAmount, accountBalance;

// prompting user to enter account balance, and amount to withdraw
cout << "Enter Account Balance: " <<endl;
cin>>accountBalance;
double remainingBalance = accountBalance;
cout << "Enter the amount you want to withdraw: " <<endl;
cin >> withdrawalAmount;

//setting conditions using while loop

while (withdrawalAmount <= remainingBalance && remainingBalance >0)
{remainingBalance-=withdrawalAmount;
    cout << "Remaining balance is: " <<remainingBalance <<endl;
if (remainingBalance == 0){
    break;}
    cout << "Enter the amount you want to withdraw: " <<endl;
    cin >> withdrawalAmount;}
    if (withdrawalAmount>remainingBalance)
    {cout << "withdrawal amount exceed available balance. "
         << "Transaction stopped." <<endl ;}


return 0;}
