#include<iostream>
using namespace std;
int main(){ int choice,l,r,b;
float pi = 3.14;

cout<<"Choose the shape";
cout<<" \n1.Square \n 2.Rectangle \n 3. Circle";
cin>>choice;

switch(choice){
    case 1:
    cout<<"Enter length of the side";
    cin>>l;

    cout<<"Area = "<<l<<"*"<<l<<"="<<l*l<<endl;
    cout<<"Perimeter ="<<4<<"*"<<l<<"="<<4*l<<endl;
    break;

    case 2:
    cout<<"Enter length of the side";
    cin>>l;
    cout<<"Enter the breadth of the rectangle";
    cin>>b;

    cout<<"Area ="<<l<<"*"<<b<<"="<<l*b<<endl;
    cout<<"Perimeter ="<<2<<"*"<<l<<"+"<<b<<"="<<2*(l+b)<<endl;
    break;

    case 3:
   
    cout<<"Enter radius of the circle";
    cin>>r;
     
    cout<<"Area = "<<pi<<"*"<<r<<"*"<<r<<"="<<pi*r*r<<endl;
    cout<<"Perimeter ="<<2<<"*"<<pi<<"*"<<r<<"="<<2*pi*r<<endl;
    break;

    default:
    cout<<"Enter valid shape";
}
       
    return 0;
}