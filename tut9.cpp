#include<iostream>

using namespace std;
int main(){
    // cout<<"This is tutorial 9" ;

    int age ;
    cout<<"Tell me your age"<<endl;
    cin>>age;

  // 1. selection control structure: If else-if ladder selection control ladder 
//     if((age<18) && (age>0)){
//         cout<<"You can not come to my party"<<endl;
//   }

// else if(age==18){
//      cout<<"You are a kid and you will get a kid pass to the party"<<endl;
//   }
//   else if(age<1){
//     cout<<"You are not yet born"<<endl;
//   }
// else{
//     cout<<"You can come to the party"<<endl;

//   }

  // 2. selection control structure: switch case statements 
  switch (age)
  {
  case 18:
    /* code */
    cout<<"You are 18"<<endl;
    break;
  
  case 33:
    /* code */
    cout<<"You are 33"<<endl;
    break;

    case 4:
    /* code */
    cout<<"You are 4"<<endl;
    break;

  default:
  cout<<"No special cases"<<endl;
   break;
  }
  cout<<"Done with switch case";
  
  
  
  return 0;

}
   