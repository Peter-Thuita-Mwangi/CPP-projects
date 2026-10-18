// Admission Decision (Nested if)
#include<iostream>
using namespace std;
int main()
{
    string student_name;
    float age, exam_score;
    cout<< "Enter student_name "; //prompting user to enter student name
    cin>> student_name;  //taking in student name from user
    cout<<"Enter student's age "; //prompting user to enter the age of the student
    cin>>age;  // taking in the age of the student from the user
    cout<< "Enter exam_score "; //prompting user to enter exam marks
    cin>> exam_score; // taking in exam marks from  the user

     if (age>18 && exam_score >50) //decision making
    {cout<< "congratulation you have secured an admission "  ;} //displaying to the user that has secured an admission
    else if (age<18 &&exam_score<50) //decision making
    {cout<< "Not Admitted: Low Score" ;} //displaying to the user that has not secured an admission
    else if (age>18 &&exam_score<50) //decision making
           {cout<< "Not Admitted: Low Score ";} //displaying to the user that has not secured an admission
    else if(age>18 &&exam_score<50) //decision making
           {cout<< "Not Admitted: Low Score " ;} //displaying to the user that has not secured an admission
    else                                                                         //decision making

           {cout<< "Not Admitted: Low Score " ;} //displaying to the user that has not secured an admission
    return 0;
}
