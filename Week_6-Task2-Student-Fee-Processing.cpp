//Student Fee Processing

#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
           string StudentName;
           string AdmissionNumber;


          double FeeBalance;
           void inputStudent (string name, string Admission, double Balance) {
            StudentName = name;
            AdmissionNumber = Admission;
            FeeBalance = Balance; }

           double makePayment (double AmountPaid) {
            FeeBalance = FeeBalance - AmountPaid;
            return FeeBalance; }

           void displayStudentDetails () {
            cout << "student name: " << StudentName << endl;
            cout << "Admission Number: " << AdmissionNumber << endl;
            cout << "Fee Balance: " << FeeBalance << endl;}
};

int main() {
    Student student1;

    string StudentName;
    string AdmissionNumber;
    double FeeBalance;
    double AmountPaid;

cout << "Enter Student Name: ";
getline (cin, StudentName);

cout << "Enter Admission Number: ";
getline (cin, AdmissionNumber);

cout << "Enter Fee Balance: ";
cin>>  FeeBalance;

student1.inputStudent(StudentName, AdmissionNumber, FeeBalance);

cout << "Enter Amount Paid: ";
cin >> AmountPaid;

student1.makePayment(AmountPaid);


cout << "\nUpdated Student Details: " <<endl;
student1.displayStudentDetails();

return 0;}
