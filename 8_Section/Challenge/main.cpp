// Section 8 Challenge
/*
 * For this program I will be using US dollars and cents
 *
 * Write a program that asks the user to enter to enter to following:
 * An integer representing the number of cents
 *
 * You may assume that the number of cents entered is greater than or equal to
 * zero
 *
 * The program should then display how to provide that change to the user.
 *
 * In the US:
 *    1 dollar is 100 cents
 *    1 quater is 25 cents
 *    1 dime is 10 cents
 *    1 nikel is 5 cents, and
 *    1 penny is 1 cent.
 *
 *    here is a sample run:
 *    Enter an amount in cents: 92
 *
 *    You can provide this change as follow:
 *    dollars: 0
 *    quaters: 3
 *    dimes: 1
 *    nickels: 1
 *    pennies: 2
 *
 *    Feel free to use your own currency system.
 *    Also, think of how you might solve the problem using the modulo operator.
 *
 *    Have fun and test your program!
 */

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int change{}, dollars{}, quaters{}, dimes{}, nickels{}, pennies{};

  cout << "Enter an amount in cents: ";
  cin >> change;

  if (change > 100) {
    dollars = change / 100;
    change %= 100;
  }
  if (change > 25) {
    quaters = change / 25;
    change %= 25;
  }
  if (change > 10) {
    dimes = change / 10;
    change %= 10;
  }
  if (change > 5) {
    nickels = change / 5;
    change %= 5;
  }

  cout << "You can provide change for this change as follow: " << endl;
  cout << "Dollars: " << dollars << endl;
  cout << "Quaters: " << quaters << endl;
  cout << "Dimes: " << dimes << endl;
  cout << "Nickles: " << nickels << endl;
  cout << "Pennies: " << change << endl;
  return 0;
}
