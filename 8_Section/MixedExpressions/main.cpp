// Section 8
// Mixed Typed Expressions
/*
 * Ask the user to enter 3 integers
 * calculate the sum of the integers then
 * calculate the average of the 3 integers.
 *
 * Display the 3 integers entered
 * the sum of the 3 integers and
 * the average of the 3 integers.
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int total{};
  int num1{}, num2{}, num3{};
  const int count{3};

  cout << "Enter 3 integers separed by spaces: ";
  cin >> num1 >> num2 >> num3;

  total = num1 + num2 + num3;
  double average{0.0};
  average = static_cast<double>(total) / count;

  cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
  cout << "The sum of the numbers is: " << total << endl;
  cout << "The average of the numbers is: " << average << endl;
  return 0;
}
