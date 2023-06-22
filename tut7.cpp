#include<iostream>

using namespace std;
int c = 65;

int main(){
   

// **********Build in Date types**********


    
//     int a,b,c;

//   cout<<"Enter the value of a:"<<endl;
//   cin>>a;
//   cout<<"Enter the value of b:"<<endl;
//   cin>>b;
//   c = a + b;
//   cout<<"The sum is "<<c<<endl;
//   cout<<endl;
//   cout<<"The global c is "<<::c;

// **********Float, double and long double LITERAlS**********

    float d=34.8f;
    long double e = 34.8l;
    cout<<"The size of 34.8 is "<<sizeof(34.8)<<endl;

    cout<<"The size of 34.8f is "<<sizeof(34.8)<<endl;
    cout<<"The size of 34.8F is "<<sizeof(34.8)<<endl;
    
    
    cout<<"The size of 34.8l is "<<sizeof(34.8)<<endl;
    cout<<"The size of 34.8L is "<<sizeof(34.8)<<endl;

cout<<"The value of d is "<<d<<endl; 
cout<<"The value of e is "<<e;

// **********Reference Variables**********
// Shubham ---> Shubh----> Sobi-----> Dcoder 
// float x = 356;
// float y = x;
// cout<<x<<endl;
// cout<<y<<endl;

// ************Typecasting***********
int a = 45;
float b = 45.69;
cout<<"The value of a is "<<(float)a<<endl;
cout<<endl;

cout<<"The value of b is "<<(int)b<<endl;


cout<<"The expression is "<<a + b<<endl;
cout<<endl;
cout<<"The expression is "<<a + int(b)<<endl;
cout<<endl;
cout<<"The expression is "<<a + (int)b<<endl;



  return 0;

}
