#include<iostream>
using namespace std;
int main(){
float temp;
int choice;

cout<<"Enter the temprature";
cin>>temp;
cout<<"1.Farhenite to Celsius\n";
cout<<"2.Celsius to Farhenite\n";
cout<<"Choose the conversion";
cin>>choice;
switch(choice){

    case 1:
     cout<<"Farehnite ="<<temp<<"*"<<9/5<<"+"<<32<<"="<<(temp*9/5)+32;
     break;

     case 2 :
     cout<<"Celsius ="<<temp<<"*"<<5/9<<"-"<<32<<"="<<(temp*5/9)-32;
     break;

}

    return 0;
}