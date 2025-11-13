#include<iostream>
using namespace std;

char gradecalc(float percentage){ int range = percentage / 10;
    char grade;

    switch (range) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
            grade = 'E';
            break;
        default:
            grade = 'F';
            break;
    }

    return grade ;
}


int main (){
int marks [5];
int total_marks =0;
float percentage;
char grade;

cout<<"Enter the marks of 5 subjects";

for( int i=0;i<5;i++){
    cout<<"Subject"<<i+1<<":";
    cin>>marks[i];
    total_marks += marks[i];
}
 percentage = (total_marks*100)/500;

cout<<"\n total_marks ="<<total_marks<<endl;
cout<<"Percentage = "<<percentage<<endl;
cout<<"Grade = "<<gradecalc(grade)<<endl;


    return 0;
}