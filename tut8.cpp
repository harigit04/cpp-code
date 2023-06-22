#include<iostream>
#include<iomanip>
using namespace std;

int main(){

// int a = 34;
// char C = 'C' ;
// cout<<"The value of a was: "<<a;
// cout<<endl;

// a=45;
// C = '4';
// cout<<"The value of a is: "<<a;


// Manipulators in C++
int a = 78,  b =98,  c = 998;
cout<<"The value of a without setw is: "<<a<<endl;
cout<<"The value of b without setw is: "<<b<<endl;
cout<<"The value of c without setw is: "<<c<<endl;

cout<<"The value of a is: "<<setw(4)<<a<<endl;
cout<<"The value of b is: "<<setw(4)<<b<<endl;
cout<<"The value of c is: "<<setw(4)<<c<<endl;

cout<<endl;



// Operator precedence 
int e =3, f =4;
// int g =a*5+b;
int g = ((((e*5)+f)-45)+87);
cout<<g;


  return 0;
    
}
