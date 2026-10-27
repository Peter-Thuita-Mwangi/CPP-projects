//Password verification system
#include<iostream>
#include<string>
using namespace std;
int main (){
    int i = 1;
string correctusername = "@USER123";
string correctpassword = "user254";
string username, password;

//prompting the user to enter username, and password
do {cout << " Enter username: " <<endl;
    cin >> username;
    cout << " Enter password: " <<endl;
    cin >> password;
    if(username == correctusername && password == correctpassword){
    cout << " Access Granted. " <<endl;}
    else
        {cout << " Incorrect credentials, try again. " <<endl;}

    ++i;}
    while (username!= correctusername || password!= correctpassword);

    return 0;}
