/* Practical 4.1 */

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     string name, enrollmentNo;
//     float marks1, marks2, marks3, marks4, marks5;
//     float total, percentage;
//     cout << "===== STUDENT RECORD MANAGEMENT SYSTEM =====" << endl;
//     cout << "\nEnter Student Name: ";
//     getline(cin, name);
//     cout << "Enter Enrollment Number: ";
//     cin >> enrollmentNo;
//     cout << "\nEnter marks of 5 subjects (out of 100):" << endl;
//     cout << "Subject 1: ";
//     cin >> marks1;
//     cout << "Subject 2: ";
//     cin >> marks2;
//     cout << "Subject 3: ";
//     cin >> marks3;
//     cout << "Subject 4: ";
//     cin >> marks4;
//     cout << "Subject 5: ";
//     cin >> marks5;
//     total = marks1 + marks2 + marks3 + marks4 + marks5;
//     percentage = total / 5;
//     cout << "\n========== ACADEMIC SUMMARY ==========" << endl;
//     cout << "Student Name       : " << name << endl;
//     cout << "Enrollment Number  : " << enrollmentNo << endl;
//     cout << "Total Marks        : " << total << " / 500" << endl;
//     cout << "Percentage         : " << percentage << "%" << endl;
//     cout << "\n========== ACADEMIC RESULT ==========" << endl;
//     if (percentage >= 40)
//     {
//         cout << "Result             : PASSED" << endl;
//         cout << "Academic Status    : Congratulations! You have passed." << endl;
//     }
//     else
//     {
//         cout << "Result             : FAILED" << endl;
//         cout << "Academic Status    : You need to improve your performance." << endl;
//     }
//     return 0;
// }


/* Practical 4.2 */

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     string name, enrollmentNo;
//     float marks1, marks2, marks3, marks4, marks5;
//     float total, average, percentage;
//     cout << "===== STUDENT RECORD MANAGEMENT SYSTEM =====" << endl;
//     cout << "\nEnter Student Name: ";
//     getline(cin, name);
//     cout << "Enter Enrollment Number: ";
//     cin >> enrollmentNo;
//     cout << "\nEnter marks of 5 subjects (out of 100):" << endl;
//     cout << "Subject 1: ";
//     cin >> marks1;
//     cout << "Subject 2: ";
//     cin >> marks2;
//     cout << "Subject 3: ";
//     cin >> marks3;
//     cout << "Subject 4: ";
//     cin >> marks4;
//     cout << "Subject 5: ";
//     cin >> marks5;
//     total = marks1 + marks2 + marks3 + marks4 + marks5;
//     average = total / 5;
//     percentage = (total / 500) * 100;
//     cout << "\n========================================" << endl;
//     cout << "         COMPLETE ACADEMIC REPORT" << endl;
//     cout << "========================================" << endl;
//     cout << "Student Name       : " << name << endl;
//     cout << "Enrollment Number  : " << enrollmentNo << endl;
//     cout << "----------------------------------------" << endl;
//     cout << "Total Marks        : " << total << " / 500" << endl;
//     cout << "Average Marks      : " << average << endl;
//     cout << "Percentage         : " << percentage << "%" << endl;
//     if (percentage >= 40)
//     {
//         cout << "Result             : PASS" << endl;
//     }
//     else
//     {
//         cout << "Result             : FAIL" << endl;
//     }
//     if (percentage >= 90 && percentage <= 100)
//     {
//         cout << "Grade              : O" << endl;
//         cout << "Performance Remark : Outstanding" << endl;
//     }
//     else if (percentage >= 80)
//     {
//         cout << "Grade              : A+" << endl;
//         cout << "Performance Remark : Excellent" << endl;
//     }
//     else if (percentage >= 70)
//     {
//         cout << "Grade              : A" << endl;
//         cout << "Performance Remark : Very Good" << endl;
//     }
//     else if (percentage >= 60)
//     {
//         cout << "Grade              : B+" << endl;
//         cout << "Performance Remark : Good" << endl;
//     }
//     else if (percentage >= 50)
//     {
//         cout << "Grade              : B" << endl;
//         cout << "Performance Remark : Satisfactory" << endl;
//     }
//     else if (percentage >= 40)
//     {
//         cout << "Grade              : C" << endl;
//         cout << "Performance Remark : Needs Improvement" << endl;
//     }
//     else
//     {
//         cout << "Grade              : F" << endl;
//         cout << "Performance Remark : Failed" << endl;
//     }
//     cout << "========================================" << endl;
//     return 0;
// }


/* Practical 4.3 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string enrollmentNo;
    string name;
    string branch;
    int semester;
    long int mobileNo;
    float mathematics, physics, cpf;
    float total, average, percentage;
    int choice;
    bool studentRegistered = false;
    bool marksEntered = false;
    do
    {
        cout << "\n========================================";
        cout << "\n STUDENT RECORD MANAGEMENT SYSTEM";
        cout << "\n========================================";
        cout << "\n1. Register New Student";
        cout << "\n2. Display Student Record";
        cout << "\n3. Enter Student Marks";
        cout << "\n4. Display Academic Result";
        cout << "\n5. Exit";
        cout << "\n========================================";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                cout << "\n----- REGISTER NEW STUDENT -----";
                cout << "\nEnter Enrollment Number: ";
                cin >> enrollmentNo;
                cin.ignore();

                cout << "Enter Student Name: ";
                getline(cin, name);

                cout << "Enter Branch: ";
                getline(cin, branch);

                cout << "Enter Semester: ";
                cin >> semester;

                cout << "Enter Mobile Number: ";
                cin >> mobileNo;

                studentRegistered = true;

                cout << "\nStudent Registered Successfully.\n";
                break;
            }
            case 2:
            {
                goto displayRecord;

                displayRecord:

                if (studentRegistered == false)
                {
                    cout << "\nPlease register a student first.\n";
                }
                else
                {
                    cout << "\n========================================";
                    cout << "\n         STUDENT RECORD";
                    cout << "\n========================================";

                    cout << "\nEnrollment Number : " << enrollmentNo;
                    cout << "\nStudent Name      : " << name;
                    cout << "\nBranch            : " << branch;
                    cout << "\nSemester          : " << semester;
                    cout << "\nMobile Number     : " << mobileNo;

                    cout << "\n========================================\n";
                }
                break;
            }
            case 3:
            {
                goto enterMarks;

                enterMarks:

                if (studentRegistered == false)
                {
                    cout << "\nPlease register a student first.\n";
                }
                else
                {
                    cout << "\n----- ENTER STUDENT MARKS -----";
                    cout << "\nEnter Mathematics Marks: ";
                    cin >> mathematics;

                    cout << "Enter Physics Marks: ";
                    cin >> physics;

                    cout << "Enter Computer Programming Foundation Marks: ";
                    cin >> cpf;
                    marksEntered = true;

                    cout << "\nMarks Entered Successfully.\n";
                }
                break;
            }
            case 4:
            {
                goto academicResult;

                academicResult:

                if (studentRegistered == false)
                {
                    cout << "\nPlease register a student first.\n";
                }
                else if (marksEntered == false)
                {
                    cout << "\nPlease enter student marks first.\n";
                }
                else
                {
                    total = mathematics + physics + cpf;
                    average = total / 3;
                    percentage = (total / 300) * 100;

                    cout << fixed << setprecision(2);

                    cout << "\n========================================";
                    cout << "\n       ACADEMIC RESULT";
                    cout << "\n========================================";

                    cout << "\nTotal Marks        : " << total << " / 300";
                    cout << "\nAverage Marks      : " << average;
                    cout << "\nPercentage         : " << percentage << "%";
                    if (percentage >= 40)
                    {
                        cout << "\nResult             : PASS";
                    }
                    else
                    {
                        cout << "\nResult             : FAIL";
                    }
                    if (percentage >= 90)
                    {
                        cout << "\nGrade              : O";
                        cout << "\nPerformance Remark : Outstanding";
                    }
                    else if (percentage >= 80)
                    {
                        cout << "\nGrade              : A+";
                        cout << "\nPerformance Remark : Excellent";
                    }
                    else if (percentage >= 70)
                    {
                        cout << "\nGrade              : A";
                        cout << "\nPerformance Remark : Very Good";
                    }
                    else if (percentage >= 60)
                    {
                        cout << "\nGrade              : B+";
                        cout << "\nPerformance Remark : Good";
                    }
                    else if (percentage >= 50)
                    {
                        cout << "\nGrade              : B";
                        cout << "\nPerformance Remark : Satisfactory";
                    }
                    else if (percentage >= 40)
                    {
                        cout << "\nGrade              : C";
                        cout << "\nPerformance Remark : Needs Improvement";
                    }
                    else
                    {
                        cout << "\nGrade              : F";
                        cout << "\nPerformance Remark : Failed";
                    }
                    cout << "\n========================================\n";
                }
                break;
            }
            case 5:
            {
                cout << "\nExiting Student Record Management System...";
                cout << "\nThank you!\n";
                break;
            }
            default:
            {
                cout << "\nInvalid Choice! Please enter a number between 1 and 5.\n";
            }
        }

    } while (choice != 5);

    return 0;
}

