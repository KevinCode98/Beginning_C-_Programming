// Section 9
// While Loop
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  // int num{};
  //
  // cout << "Enter a positive number - start the countdown: ";
  // cin >> num;
  //
  // while (num > 0) {
  //   cout << num << endl;
  //   num--;
  // }
  //
  // cout << "Blastoff" << endl;

  // int num{};
  // cout << "Enter a positive integer to count up to: ";
  // cin >> num;
  //
  // int i{1};
  // while (num >= i) {
  //   cout << i << endl;
  //   i++;
  // }

  bool done{false};
  int number{};

  while (!done) {
    cout << "Enter a integer between 1 and 5: ";
    cin >> number;

    if (number <= 1 || number >= 5)
      cout << "Out of range, try again" << endl;
    else {
      cout << "Thanks!" << endl;
      done = true;
    }
  }

  return 0;
}
