// / #PRACTICAL:-1 --->* Printing Hello World:-*/

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello World!";
//     return 0;
// }

//Supplementary problem 1:- ---> Write a program to display your name, enrollment 
// number, and branch, and generate all intermediate 
// compilation files. 

// #include<iostream>
// using namespace std;
// int main(){
//     /*Student's Information*/
//     char name[30];
//     char enrollmentno[15];
//     char branch[10];
//     cout<<"Enter Student's Name:-";
//     cin.getline(name,30);
//     cout<<"Enter Student's Enrollment NO.:-";
//     cin>>enrollmentno;
//     cout<<"Enter Student's Branch:-";
//     cin>>branch;
//     return 0;
// }


//Supplementary problem 2:- --->*Develop a program to perform the addition of two 
// numbers and observe each compilation stage.


// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2,addition;
//     cout<<"Enter First Number:-";
//     cin>>num1;
//     cout<<"Enter Second Number:-";
//     cin>>num2;
//     addition = num1+num2;
//     cout<<"Addition of Two Numbers:-"<<addition;
//     return 0;
// }


//Supplementary problem 3:- ---> Create a program to calculate the area of a rectangle.

#include<iostream>
using namespace std;
int main(){
    float length,breadth,area;
    cout<<"Enter Length of Rectangle:-";
    cin>>length;
    cout<<"Enter Breadth of Rectangle:-";
    cin>>breadth;
    area=length*breadth;
    cout<<"Area of Rectangle:-"<<area;
    return 0;
}


