// Section 9
// Challenge
/*
 * This challenge is about using a collection (list) of integers and allowing
 * the user to select options from a menu to perform operations on the list.
 *
 * Your program should display a menu options to the user as follow:
 *
 *    P - Print numbers
 *    A - Add a number
 *    M - Display mean of the numbers
 *    S - Display the smallest number
 *    L - Display the largest number
 *    Q - Quit
 *
 *    Enter your choice:
 *
 *
 * The program should only acept valid choices from the user, bot upper and
 * lowercase selections should be allowed. If an illegal choice is made, you
 * should display, "Unknown selection, please try again" and the menu options
 * should be display again.
 *
 *
 * If the user enters 'P' or 'p', you should display all of the elements (ints)
 * in the list. If the list is empty you should display "[] - the list is empty"
 * If the list is not empty then all the list element should be displayed inside
 * square brackets separated by a space. For example, [ 1 2 3 4 5 ]
 *
 * If the user enters 'A' or 'a' then you should prompt the user for an integer
 * to add to the list which you will add to the list and then display it was
 * added. For example, if the user enters 5 You should display, "5 added".
 * Duplicate list entries are OK
 *
 * If the user enters 'M' or 'm'  you should calculate the mean or average of
 * the elements in the list and display it. If the list is empty you should
 * display, "Unable to calculate the mean - no data"
 *
 * If the user enters 'S' or 's' you should display the smallest element in the
 * list. For example, if the list contains [2 4 5 1],  you should display, "The
 * smallest number is 1" If the list is empty you should display, "Unable to
 * determine the smallest number - list is empty"
 *
 * If the user enters 'L' or 'l' you should display the largest element in the
 * list For example, if the list contains [2 4 5 1], you should display, "The
 * largest number is 5" If the list is empty you should display, "Unable to
 * determine the largest number - list is empty"
 *
 * If the user enters 'Q' or 'q' then you should display 'Goodbye" and the
 * program should terminate.
 *
 * Before you begin. Write out the steps you need to take and decide in what
 * order they should be done. Think about what loops you should use as well as
 * what you will use for your selection logic.
 *
 * This exercise can be challenging! It may likely take a few attempts before
 * you complete it -- that's OK!
 *
 * Finally, be sure to test your program as you go and at the end.
 *
 * Hint: Use a vector!
 *
 * Additional functionality if you wish to extend this program.
 *
 * - search for a number in the list and if found display the number of times it
 * occurs in the list
 * - clearing out the list (make it empty again) (Hint: the vector class has a
 * .clear() method)
 * - don't allow duplicate entries
 * - come up with your own ideas!
 *
 * Good luck!
 */
#include <cstdlib>
#include <iostream>
#include <limits.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  char selection{};
  vector<int> numbers{};
  int number{}, smallest{}, largest{};
  double mean{};

  do {
    cout << "P - Print numbers" << endl;
    cout << "A - Add number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
    cin >> selection;

    switch (selection) {
    case 'p':
    case 'P':
      cout << "Print numbers: " << endl;
      cout << "[ ";
      for (auto val : numbers)
        cout << val << ", ";
      cout << " ]" << endl;
      break;

    case 'a':
    case 'A':
      cout << "Add number: " << endl;
      cout << "Enter an integer to add to the list: ";
      cin >> number;

      numbers.push_back(number);
      break;

    case 'm':
    case 'M':
      cout << "Display mean of the numbers: " << endl;
      for (auto val : numbers)
        mean += val;

      cout << "The mean is: " << mean / numbers.size() << endl;
      break;

    case 's':
    case 'S':
      cout << "Display the smallest number: " << endl;
      smallest = INT_MAX;
      for (auto val : numbers)
        if (val < smallest)
          smallest = val;
      cout << "The smallest number is: " << smallest << endl;
      break;

    case 'l':
    case 'L':
      cout << "Display the largest number: " << endl;
      largest = INT_MIN;
      for (auto val : numbers)
        if (val > largest)
          largest = val;
      cout << "The largest number is: " << largest << endl;
      break;

    case 'q':
    case 'Q':
      cout << "Goodbye! :D" << endl;
      break;

    default:
      cout << "Unknown selection, please try again." << endl;
      break;
    }

    system("pause");
    system("cls");
  } while (selection != 'q' && selection != 'Q');

  return 0;
}
