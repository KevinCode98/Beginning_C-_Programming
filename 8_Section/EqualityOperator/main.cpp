#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  bool equal_result{false};
  bool no_equal_result{true};

  int num1{}, num2{};
  //
  // cout << "Enter two integers separated by a space: ";
  // cin >> num1 >> num2;
  //
  // equal_result = (num1 == num2);
  // no_equal_result = (num1 != num2);
  //
  // cout << "Compasision result (equals): " << equal_result << endl;
  // cout << "Compasision result (not equals): " << no_equal_result << endl;

  // char char1{}, char2{};
  // cout << "Enter two characteres separated by a space: ";
  // cin >> char1 >> char2;
  //
  // equal_result = (char1 == char2);
  // no_equal_result = (char1 != char2);
  //
  // cout << "Compasision result (equals): " << equal_result << endl;
  // cout << "Compasision result (not equals): " << no_equal_result << endl;

  double double1{}, double2{};
  // cout << "Enter two doubles separated by a space: ";
  // cin >> double1 >> double2;
  //
  // equal_result = (double1 == double2);
  // no_equal_result = (double1 != double2);
  //
  // cout << "Compasision result (equals): " << equal_result << endl;
  // cout << "Compasision result (not equals): " << no_equal_result << endl;

  cout << "Enter an integer and a double separated by a space: ";
  cin >> num1 >> double1;

  equal_result = (double1 == num1);
  no_equal_result = (double1 != num1);

  cout << "Compasision result (equals): " << equal_result << endl;
  cout << "Compasision result (not equals): " << no_equal_result << endl;

  return 0;
}
