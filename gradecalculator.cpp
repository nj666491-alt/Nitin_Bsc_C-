#include<iostream>
using namespace std;
int main (){
int S1,S2,S3,S4,S5;
int total_makrs;
float percentage;
char grade;

cout<<"Enter marks of the 5 subjects";
cin>>S1>>S2>>S3>>S4>>S5;
total_makrs = S1+S2+S3+S4+S5;
percentage = (total_makrs*100)/500;
int range = (percentage/10);

switch(range){

    case 10:

    case 9:
    grade = 'A';
    break;
    
    case 8:
    grade = 'B';
    break;

    case 7:
    grade ='C';
    break;

    case 6:
    grade = 'D';
    break;


    case 5:
    grade ='E';
    break;

    default :

    grade = 'F';
    break;

}

cout<<"\n total_marks"<<total_makrs<<" /500"<<endl;
cout<<"Percentage"<<percentage<<endl;
cout<<"Grade"<<grade<<endl;

    return 0;
}