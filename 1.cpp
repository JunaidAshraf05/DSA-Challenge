#include <iostream>
using namespace std;
// write a program that takes input of age and prints whether the person is a child, teenager, adult, or senior citizen
// >=18 yes
// <18 no



int main() {
  
  int age;



//   cin>>age;
//   if(age>=18){
//  cout<< "you are adult";
//   }
//  else{
//  cout<< "you are not adult";
//   }
//     cout << "Enter your age: ";
  // Taking input from the user
  cin >> age;
  // Checking the age category
  if (age < 13) {
    cout << "You are a child." << endl;
  } else if (age >= 13 && age < 20) {
    cout << "You are a teenager." << endl;
  } else if (age >= 20 && age < 60) {
    cout << "You are an adult." << endl;
  } else {
    cout << "You are a senior citizen." << endl;
  }
  
  return 0;
}