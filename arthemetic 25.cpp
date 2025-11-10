#include<iostream>
using namespace std;
int main () {
   
   int a,b,choice;

   cout<<"enter value of a and b ";
   cin>>a>>b;
   cout<<"choose operation.\n";
   cin>>choice;

   switch(choice){  

    case 1:

    cout<<"Addition="<<a+b;
    break;
   
   
  case 2:
    
    cout<<"Subtraction="<<a-b;
    break;
   

   case 3:

    cout<<"division="<<a/b;
    break;
   
   
   case 4:
   
    cout<<"Product="<<a*b;
    break;

    default:
     cout<<"Invalid choice";
   
   }
   
   return 0;
}