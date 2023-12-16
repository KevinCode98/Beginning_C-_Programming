// Section 9
// If Statement
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  const int min{10};
  const int max{100};
  int num{};

  cout << "Enter a number between " << min << " and " << max << ": ";
  cin >> num;

  if (num >= min) {
    cout << "\n============================== If statement 1 "
            "========================"
         << endl;
    cout << num << " is grater than " << min << endl;

    int diff{num - min};
    cout << num << " is " << diff << " grater than " << endl;
  }

  if (num <= max) {
    cout << "\n============================== If statement 2 "
            "========================"
         << endl;
    cout << num << " is less than or equal to " << max << endl;

    int diff{max - num};
    cout << num << " is " << diff << " less than " << max << endl;
  }

  if (num >= min && num <= max) {
    cout << "\n============================== If statement 3 "
            "========================"
         << endl;
    cout << num << " is in range " << endl;
    cout << "This means statements 1 and 2 must also display!!" << endl;
  }

  if (num == min || num == max) {
    cout << "\n============================== If statement 4 "
            "========================"
         << endl;
    cout << num << " is right on a boundary" << endl;
    cout << "This means all 4 statements display" << endl;
  }
  return 0;
}
