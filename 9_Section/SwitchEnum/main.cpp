// Section 9
// Switch with enumeration
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  enum Direction { left, right, up, down };

  Direction heading{left};

  switch (heading) {
  case left:
    cout << "Going left" << endl;
    break;

  case right:
    cout << "Going right" << endl;
    break;

  default:
    cout << "Ok" << endl;
    break;
  }
  return 0;
}
