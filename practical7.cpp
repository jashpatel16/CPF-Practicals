// #include<iostream>
// using namespace std;
// int main(){
//     char studentname[25],enrollmentno[15],branch[10],refid[35];
//     cout<<"Enter the student's name::";
//     cin.getline(studentname,25);
//     cout<<"Enter the student's enrollment number::";
//     cin.getline(enrollmentno,15);
//     cout<<"Enter the student's branch::";
//     cin.getline(branch,10);
//     int i=0,j=0,k=0;
//     while(studentname[i]!='\0'){
//         refid[i]=studentname[i];
//         i++;
//     }
//     refid[i]='-';
//     i++;
//     while(enrollmentno[j]!='\0'){
//     refid[i]=enrollmentno[j];
//     i++;
//     j++;
//     }
//     refid[i]='-';
//     i++;
//     while(branch[k]!='\0'){
//         refid[i]=branch[k];
//         i++;
//         k++;
//     }
//     refid[i]='\0';
//     cout<<"The reference id of the student is::"<<refid<<endl;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     char studentname[30],enrollmentno[15],firstname[15],lastname[15],refid[35];
//     cout<<"Enter the student's name::";
//     cin.getline(studentname,30);
//     cout<<"Enter the student's enrollment number::";
//     cin.getline(enrollmentno,15);
//     int spacepos=-1;
//     int i=0;
//     while(studentname[i]!='\0'){
//         if(studentname[i]==' '){
//             spacepos=i;
//             break;
//         }
//         i++;
//     }
//     i=0;
//     while(i<spacepos){
//         firstname[i]=studentname[i];
//         i++;
//     }
//     firstname[i]='\0';
//     i=spacepos+1;
//     int j=0;
//     while(studentname[i]!='\0'){
//         lastname[j]=studentname[i];
//         i++;
//         j++;
//     }
//     lastname[j]='\0';
//     cout<<"The first name of the student is::"<<firstname<<endl;
//     cout<<"The last name of the student is::"<<lastname<<endl;
//     return 0;
// }






#include<iostream>
using namespace std;
int main(){
    char studentname[30],enrollmentno[15],firstname[15],lastname[15],refid[35];
    cout<<"Enter the student's name::";
    cin.getline(studentname,30);
    cout<<"Enter the student's enrollment number::";
    cin.getline(enrollmentno,15);
    int spacepos=-1;
    int i=0;
    while(studentname[i]!='\0'){
        if(studentname[i]==' '){
            spacepos=i;
            break;
        }
        i++;
    }
    i=0;
    while(i<spacepos){
        firstname[i]=studentname[i];
        i++;
    }
    firstname[i]='\0';
    i=spacepos+1;
    int j=0;
    while(studentname[i]!='\0'){
        lastname[j]=studentname[i];
        i++;
        j++;
    }
    lastname[j]='\0';
    cout<<"The first name of the student is::"<<firstname<<endl;
    cout<<"The last name of the student is::"<<lastname<<endl;
}