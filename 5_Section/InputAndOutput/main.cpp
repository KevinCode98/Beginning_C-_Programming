// Section 5
// Basic I/O using cin and cout

#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
  // cout << "Hello world!";
  // cout << "Hello";
  // cout << "World" << endl;

  // cout << "Hello World!" << endl;
  // cout << "Hello" << endl;
  // cout << "Hello"<< "World\n";
  // cout << "Hello\nOut\nThere" << endl;

  int num1{};
  int num2{};
  double num3{};

  // cout << "Enter an integer: ";
  // cin >> num1;
  // cout << "You entered: " << num1 << endl;

  // cout << "Enter a fist integer: ";
  // cin >> num1;

  // cout << "Enter a second integer: ";
  // cin >> num2;

  // cout << "You entered " << num1 << " and " << num2 << endl;
  
  cout << "Enter 2 integers separed with a space: ";
  cin >> num1 >> num2;
  cout << "You entered " << num1 << " and " << num2 << endl;
 


  // cout << "Enter 2 integers separed with a space: ";
  // cin >> num1 >> num2;
  // cout << "You entered " << num1 << " and " << num2 << endl;




  return 0;
}
