// Section 9
// Do While Loop
// Simple Menu Example

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  char selection{};

  do {
    cout << "\n-------------------------------" << endl;
    cout << "1. Do this" << endl;
    cout << "2. Do that" << endl;
    cout << "3. Do Do something else" << endl;
    cout << "Q. Quit" << endl;
    cout << "\nEnter your selection: ";
    cin >> selection;

    if (selection == '1')
      cout << "Your chose 1 - doing this" << endl;
    else if (selection == '2')
      cout << "Your chose 2 - doing that" << endl;
    else if (selection == '3')
      cout << "Your chose 3 - doing something else" << endl;
    else if (selection == 'q' || selection == 'Q')
      cout << "Goodbye! ;D" << endl;
    else
      cout << "Unknow option -- try again... " << endl;

    system("pause");
    system("cls");
  } while (selection != 'q' && selection != 'Q');
  return 0;
}
