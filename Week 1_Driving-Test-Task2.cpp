//Driving Test Result Evaluation System
#include<iostream>
using namespace std;
int main()
{
    string student_name;
    float theory_test_marks, practical_test_marks, average_score;
    cout<< "Enter student name " <<"\n"; //prompting user to enter student name
    cin>>student_name; //taking in student name
    cout<< "Enter theory test marks" <<"\n"; // prompting user to enter theory test marks
    cin>>theory_test_marks;  //taking in theory test marks
    cout<<"Enter practical test marks" <<"\n"; // prompting user to enter practical test marks
    cin>>practical_test_marks; //taking in practical test marks

    average_score = theory_test_marks + practical_test_marks; // averaging student's score
    cout<< "student name " <<student_name <<"\n"; //displaying student name to the user screen
    cout<< "theory marks " <<theory_test_marks <<"\n"; //displaying theory test marks to the user screen
    cout<< "practical marks " <<practical_test_marks <<"\n"; // displaying practical marks to the user screen
    cout<< "average score " <<average_score <<"\n"; // displaying the average score to the user screen
    if (average_score>=50)
    {cout<< "passed "  <<"\n";}
        else if (average_score<=49)

        {cout<< "failed " <<"\n";}
    return 0;

}
