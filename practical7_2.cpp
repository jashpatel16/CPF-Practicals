#include<iostream>
using namespace std;

int main(){

    char para[500];

    int characters = 0;
    int words = 0;
    int alphabets = 0;
    int digits = 0;
    int special_characters = 0;

    cout<<"Enter a paragraph::";
    cin.getline(para,500);
    for(int i=0; para[i]!='\0'; i++){

        characters++;

        if((para[i]>='A' && para[i]<='Z') || 
           (para[i]>='a' && para[i]<='z')){
            alphabets++;
        }
        else if(para[i]>='0' && para[i]<='9'){
            digits++;
        }
        else if(para[i]!=' '){
            special_characters++;
        }
    }

    words = 0;

    for(int i=0; para[i]!='\0'; i++){

        if(para[i]!=' ' && (i==0 || para[i-1]==' ')){
            words++;
        }
    }

    char first_character = para[0];

    char last_character = para[characters-1];

    cout<<endl;
    cout<<"First Word::";

    for(int i=0; para[i]!='\0' && para[i]!=' '; i++){
        cout<<para[i];
    }
    int last_space = -1;

    for(int i=0; para[i]!='\0'; i++){
        if(para[i]==' '){
            last_space = i;
        }
    }

    cout<<endl;
    cout<<"Last Word::";

    for(int i=last_space+1; para[i]!='\0'; i++){
        cout<<para[i];
    }
    cout<<endl<<endl;

    cout<<"Total Number of Characters::"<<characters<<endl;
    cout<<"Total Number of Words::"<<words<<endl;
    cout<<"Total Number of Alphabets::"<<alphabets<<endl;
    cout<<"Total Number of Digits::"<<digits<<endl;
    cout<<"Total Number of Special Characters::"<<special_characters<<endl;

    cout<<"First Character::"<<first_character<<endl;
    cout<<"Last Character::"<<last_character<<endl;

    return 0;
}