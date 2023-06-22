#include<iostream>
// There are two types of header files 
// 1. system header files: It comes with the compiler

// 2. User defined header files: It is written by the programmer 
// #include "this.h" --> This will produce an error if this.h is not present in the current directory  
using namespace std;

int main(){
    int a=44, b=56;

    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of oprators in C++"<<endl;
    // Arithmetic operators 
    cout<<"The value of a + b is "<<a+b<<endl; 
    cout<<"The value of a - b is "<<a-b<<endl; 
    cout<<"The value of a * b is "<<a*b<<endl; 
    cout<<"The value of a / b is "<<a/b<<endl; 
    cout<<"The value of a % b is "<<a%b<<endl; 
    cout<<"The value of a++  is "<<a++<<endl; 
    cout<<"The value of ++a is "<<++a<<endl; 
    cout<<"The value of --a is "<<--a<<endl; 
    cout<<"The value of a-- is "<<a--<<endl; 
    cout<<endl;
    // Assignment Operators --> used to assign values to variables 
    // int a =23, b=15;
    // char d= 'd' ;
    // Comparison Operators  
    cout<<"Following are the comparison operators i  C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<endl;

    // Logical Operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b) is: (a<b)) is:"<<(!(a==b))<<endl;


    return 0;
     
}
