/* #PRACTICAL:-3.1  */

// #include<iostream>
// using namespace std;
// int main(){
//     float softwareverion;
//     string institute;
//     string academicyear;
//     string enrollmentno;
//     string studentname;
//     string branch;
//     int semester;
//     long int mobileno;
//     int CPFmarks,BEEEmarks,Mathsmarks,totalmarks;
//     float percentage,averagemarks;
//     cout<<"                                                                   "<<endl;
//     cout<<"****************Student's Record Management System*****************"<<endl;
//     cout<<"                                                                   "<<endl;
//     cout<<"Enter Software Version:-";
//     cin>>softwareverion;
//     cout<<"Enter Institute Name:-";
//     getline(cin>>ws,institute);
//     cout<<"Enter Academic Year:-";
//     getline(cin>>ws,academicyear);
//     cout<<"                                                                   "<<endl;
//     cout<<"*********************Student's Registration:-**********************"<<endl;
//     cout<<"                                                                   "<<endl;
//     cout<<"Enter Student's Enrollement NO.:-";
//     cin>>enrollmentno;
//     cout<<"Enter Student's Name:-";
//     getline(cin>>ws,studentname);
//     cout<<"Enter Student's Branch :-";
//     cin>>branch;
//     cout<<"Enter Student's Semester :-";
//     cin>>semester;
//     cout<<"Enter Student's Mobile NO. :-";
//     cin>>mobileno;
//     cout<<"                                                                   "<<endl;
//     cout<<"**********************Academic Information:-***********************"<<endl;
//     cout<<"                                                                   "<<endl;
//     cout<<"Enter Student's CPF Marks:-";
//     cin>>CPFmarks;
//     cout<<"Enter Student's BEEE Marks:-";
//     cin>>BEEEmarks;
//     cout<<"Enter Student's Maths Marks:-";
//     cin>>Mathsmarks;
//     totalmarks=CPFmarks+BEEEmarks+Mathsmarks;
//     averagemarks=totalmarks/3.0;
//     percentage=(totalmarks/300.0)*100;
//     cout<<"                                                                   "<<endl;
//     cout<<"***********************Academic Summary:-**************************"<<endl;
//     cout<<"                                                                   "<<endl;
//     cout<<"Total Marks:-"<<totalmarks<<endl;
//     cout<<"Average Marks:-"<<averagemarks<<endl;
//     cout<<"Percentage:-"<<percentage<<"%"<<endl;
//     cout<<"-------------------------------------------------------------------"<<endl;
//     cout<<"                      Student's Information                        "<<endl;
//     cout<<"-------------------------------------------------------------------"<<endl;
//     cout<<"Software Version:-"<<softwareverion<<endl;
//     cout<<"Institute Name:-"<<institute<<endl;
//     cout<<"Academic Year:-"<<academicyear<<endl;
//     cout<<"Enrollment No.:-"<<enrollmentno<<endl;
//     cout<<"Name:-"<<studentname<<endl;
//     cout<<"Branch:-"<<branch<<endl;
//     cout<<"Semester:-"<<semester<<endl;
//     cout<<"Mobile No.:-"<<mobileno<<endl;
//     return 0;
// }


/* #PRACTICAL:-3.2  */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string studentName;
    string enrollmentNumber;
    float cpfMarks, mathMarks, physicsMarks;
    float englishMarks, electronicsMarks;
    float totalMarks, averageMarks, percentage;

    cout << "============================================" << endl;
    cout << "       STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "============================================" << endl;

    cout << "Enter Student Name      : ";
    getline(cin, studentName);

    cout << "Enter Enrollment Number : ";
    cin >> enrollmentNumber;

    cout << endl;
    cout << "Enter marks out of 100:" << endl;

    cout << "Computer Programming Foundation : ";
    cin >> cpfMarks;

    cout << "Mathematics                     : ";
    cin >> mathMarks;

    cout << "Physics                         : ";
    cin >> physicsMarks;

    cout << "English                         : ";
    cin >> englishMarks;

    cout << "Electronics                     : ";
    cin >> electronicsMarks;

    totalMarks = cpfMarks + mathMarks + physicsMarks
               + englishMarks + electronicsMarks;

    averageMarks = totalMarks / 5;

    percentage = (totalMarks / 500) * 100;
    cout << endl;
    cout << "============================================" << endl;
    cout << "             ACADEMIC SUMMARY" << endl;
    cout << "============================================" << endl;

    cout << left << setw(35) << "Subject" << "Marks" << endl;
    cout << "--------------------------------------------" << endl;

    cout << left << setw(35) << "Computer Programming Foundation"
         << cpfMarks << endl;

    cout << left << setw(35) << "Mathematics"
         << mathMarks << endl;

    cout << left << setw(35) << "Physics"
         << physicsMarks << endl;

    cout << left << setw(35) << "English"
         << englishMarks << endl;

    cout << left << setw(35) << "Electronics"
         << electronicsMarks << endl;

    cout << "--------------------------------------------" << endl;

    cout << left << setw(35) << "Total Marks"
         << totalMarks << endl;

    cout << left << setw(35) << "Average Marks"
         << averageMarks << endl;

    cout << left << setw(35) << "Percentage"
         << percentage << "%" << endl;

    cout << "============================================" << endl;

    return 0;
}

