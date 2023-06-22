#include <iostream>
using namespace std;

int main(){


    /*Loops in C++:
    There are three types of loops in C++:

       1. For loop
       2. While loop
       3. do-while loop


    */

    /*For loop in C++*/
    //  int i=1;
    //  cout<<i;
    //  i++;
    // Syntax for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for (int  i = 1; i < 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    //     i++;
    // }

    //    Example of infinite loop

    // for (int  i = 1;  34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;

    // }

    /*While loop in C++*/
    // Syntax:
    // While(condition):
    // {
    //     C++ statements;
    // }

    //    printing 1 to 40 using while loop
    // int i = 1;
    // while(i<=40){
    //       cout<<i<<endl;
    //       i++;

    // }

    // Example of infinite while loop
    // while(true)
    // {
    //     int i = 1;
    //     cout <<i<<endl;
    //     i++;
    // }
/*For loop in C++*/
    //  int i=1;
    //  cout<<i;
    //  i++;

    /* do while loop in C++*/
    // Syntax :
    // do 
    // {
    //     C++ statements
    // }while (condition)
    // Printing 1 to 40 using while loop 
         
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    } while(i<=40);

    return 0;
}