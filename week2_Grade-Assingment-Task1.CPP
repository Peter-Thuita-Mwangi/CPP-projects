// grade assigning software
#include<iostream>
using namespace std;
int main ()
{string student_name;
float exam_marks;
// taking student name and exam marks
cout<< "enter student_name ";
cin>> student_name;

cout<< "enter exam_marks ";
cin>> exam_marks;

if (exam_marks>=70 &&exam_marks<=100)
{cout<< "grade A " ; }
else if(exam_marks>=60 && exam_marks<=69)
    {cout<< "grade B " ; }
else if (exam_marks>=50 &&exam_marks<=59)
    {cout<< "Grade C "  ;}
    else if (exam_marks>=40 && exam_marks<=49)
    {cout<< "Grade D "  ;}
    else if (exam_marks>=1 &&exam_marks<=39)
    {cout<< "Grade E "  ;}
    else
    { cout<< "exam marks should be between 0 and 101 " ;}

    return 0;}
