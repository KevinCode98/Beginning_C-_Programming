// Section 8
// The assignment operator

#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int num1{10};
  int num2{20};

  num1 = num2 = 1000;

  cout << "num1 is " << num1 << endl;
  cout << "num2 is " << num2 << endl;


  return 0;
}
