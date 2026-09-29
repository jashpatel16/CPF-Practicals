/* Practical 5.1:- */

// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;

// int main()
// {
//     string enrollmentNo, name, branch, mobileNo;
//     int semester, numberOfSubjects, choice;
//     float marks[100], total = 0, average, percentage;
//     bool studentRegistered = false, marksEntered = false;

//     do
//     {
//         cout << endl << "========================================" << endl;
//         cout << "   STUDENT RECORD MANAGEMENT SYSTEM" << endl;
//         cout << "========================================" << endl;
//         cout << "1. Register New Student" << endl;
//         cout << "2. Display Student Record" << endl;
//         cout << "3. Enter Student Marks" << endl;
//         cout << "4. Display Academic Result" << endl;
//         cout << "5. Exit" << endl;
//         cout << "========================================" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             cout << endl << "----- REGISTER NEW STUDENT -----" << endl;
//             cout << "Enter Enrollment Number: ";
//             cin >> enrollmentNo;
//             cin.ignore();
//             cout << "Enter Student Name: ";
//             getline(cin, name);
//             cout << "Enter Branch: ";
//             getline(cin, branch);
//             cout << "Enter Semester: ";
//             cin >> semester;
//             cout << "Enter Mobile Number: ";
//             cin >> mobileNo;
//             studentRegistered = true;
//             cout << endl << "Student Registered Successfully." << endl;
//             break;

//         case 2:
//             if (!studentRegistered)
//                 cout << endl << "Please register a student first." << endl;
//             else
//             {
//                 cout << endl << "========== STUDENT RECORD ==========" << endl;
//                 cout << "Enrollment Number : " << enrollmentNo << endl;
//                 cout << "Student Name      : " << name << endl;
//                 cout << "Branch            : " << branch << endl;
//                 cout << "Semester          : " << semester << endl;
//                 cout << "Mobile Number     : " << mobileNo << endl;
//                 cout << "====================================" << endl;
//             }
//             break;

//         case 3:
//             if (!studentRegistered)
//                 cout << endl << "Please register a student first." << endl;
//             else
//             {
//                 cout << endl << "----- ENTER STUDENT MARKS -----" << endl;
//                 cout << "Enter number of subjects: ";
//                 cin >> numberOfSubjects;

//                 if (numberOfSubjects <= 0 || numberOfSubjects > 100)
//                     cout << "Invalid number of subjects." << endl;
//                 else
//                 {
//                     total = 0;
//                     for (int i = 0; i < numberOfSubjects; i++)
//                     {
//                         cout << "Enter marks for Subject " << i + 1 << ": ";
//                         cin >> marks[i];
//                         total += marks[i];
//                     }
//                     marksEntered = true;
//                     cout << endl << "Marks Entered Successfully." << endl;
//                 }
//             }
//             break;

//         case 4:
//             if (!studentRegistered)
//                 cout << endl << "Please register a student first." << endl;
//             else if (!marksEntered)
//                 cout << endl << "Please enter student marks first." << endl;
//             else
//             {
//                 average = total / numberOfSubjects;
//                 percentage = average;

//                 cout << fixed << setprecision(2);
//                 cout << endl << "========== ACADEMIC RESULT ==========" << endl;
//                 cout << "Total Marks   : " << total << " / "
//                      << numberOfSubjects * 100 << endl;
//                 cout << "Average Marks : " << average << endl;
//                 cout << "Percentage    : " << percentage << "%" << endl;

//                 if (percentage >= 40)
//                     cout << "Result        : PASS" << endl;
//                 else
//                     cout << "Result        : FAIL" << endl;

//                 if (percentage >= 90)
//                     cout << "Grade         : O" << endl << "Remark        : Outstanding" << endl;
//                 else if (percentage >= 80)
//                     cout << "Grade         : A+" << endl << "Remark        : Excellent" << endl;
//                 else if (percentage >= 70)
//                     cout << "Grade         : A" << endl << "Remark        : Very Good" << endl;
//                 else if (percentage >= 60)
//                     cout << "Grade         : B+" << endl << "Remark        : Good" << endl;
//                 else if (percentage >= 50)
//                     cout << "Grade         : B" << endl << "Remark        : Satisfactory" << endl;
//                 else if (percentage >= 40)
//                     cout << "Grade         : C" << endl << "Remark        : Needs Improvement" << endl;
//                 else
//                     cout << "Grade         : F" << endl << "Remark        : Failed" << endl;

//                 cout << "====================================" << endl;
//             }
//             break;

//         case 5:
//             cout << endl << "Exiting Student Record Management System..." << endl;
//             cout << "Thank you!" << endl;
//             break;

//         default:
//             cout << endl << "Invalid Choice! Enter a number between 1 and 5." << endl;
//         }

//     } while (choice != 5);

//     return 0;
// }





/* Practical 5.2:- */

// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;

// int main()
// {
//     string enrollmentNo, name, branch, mobileNo;
//     int semester;
//     int choice;
//     char again;

//     bool studentRegistered = false;

//     do
//     {
//         cout << endl;
//         cout << "===== STUDENT RECORD MANAGEMENT SYSTEM =====" << endl;
//         cout << "1. Register New Student" << endl;
//         cout << "2. Display Student Record" << endl;
//         cout << "3. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             do
//             {
//                 cout << endl;
//                 cout << "----- Register New Student -----" << endl;

//                 cout << "Enter Enrollment Number: ";
//                 cin >> enrollmentNo;
//                 cin.ignore();

//                 cout << "Enter Name: ";
//                 getline(cin, name);

//                 cout << "Enter Branch: ";
//                 getline(cin, branch);

//                 cout << "Enter Semester: ";
//                 cin >> semester;

//                 cout << "Enter Mobile Number: ";
//                 cin >> mobileNo;

//                 studentRegistered = true;

//                 cout << endl;
//                 cout << "----- Student Information -----" << endl;
//                 cout << setw(20) << left << "Enrollment No:" << enrollmentNo << endl;
//                 cout << setw(20) << left << "Name:" << name << endl;
//                 cout << setw(20) << left << "Branch:" << branch << endl;
//                 cout << setw(20) << left << "Semester:" << semester << endl;
//                 cout << setw(20) << left << "Mobile No:" << mobileNo << endl;

//                 cout << endl;
//                 cout << "Do you want to enter another student? (y/n): ";
//                 cin >> again;

//             } while (again == 'y' || again == 'Y');

//             cout << endl;
//             cout << "Returning to Main Menu..." << endl;
//             break;

//         case 2:
//             if (studentRegistered)
//             {
//                 cout << endl;
//                 cout << "----- Student Record -----" << endl;
//                 cout << setw(20) << left << "Enrollment No:" << enrollmentNo << endl;
//                 cout << setw(20) << left << "Name:" << name << endl;
//                 cout << setw(20) << left << "Branch:" << branch << endl;
//                 cout << setw(20) << left << "Semester:" << semester << endl;
//                 cout << setw(20) << left << "Mobile No:" << mobileNo << endl;
//             }
//             else
//             {
//                 cout << endl;
//                 cout << "No student record found." << endl;
//             }
//             break;

//         case 3:
//             cout << endl;
//             cout << "Exiting program..." << endl;
//             break;

//         default:
//             cout << endl;
//             cout << "Invalid choice." << endl;
//         }

//     } while (choice != 3);

//     return 0;
// }





/* Practical 5.3:- */

/* No.1 */

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,a;
//     int num;
//     cout<<"Enter a number::";
//     cin>>num;
//     for(i=1;i<=num;i++){
//         a = 1;
//     for(j=1;j<=i;j++){
//         cout<<a<<" ";
//         a++;
//     }
//     cout<<endl;
// }
// }


/* No.2 */

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     int num;
//     cout<<"Enter a number::";
//     cin>>num;
//     for(i=1;i<=num;i++){
//     for(j=1;j<=i;j++){
//         cout<<(char)(j+96)<<" ";
//     }
//     cout<<endl;
// }
// }


/* No.3 */

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     int num;
//     cout<<"Enter a number::";
//     cin>>num;
//     for(i=1;i<=num;i++){
//     for(j=1;j<=i;j++){
//         cout<<(char)(j+64)<<" ";
//     }
//     cout<<endl;
// }
// }


/* No.4 */

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter a number::";
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }



/* No.5 */

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter a number::";
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num - i; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         for (int j = i - 1; j >= 1; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



/* No.6 */

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter a number::";
//     cin >> num;

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num - i; j++)
//         {
//             cout << "  ";
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             cout << char('A' + j - 1) << " ";
//         }
//         for (int j = i - 1; j >= 1; j--)
//         {
//             cout << char('A' + j - 1) << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

