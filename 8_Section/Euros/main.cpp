// Section 8
// Convert EUR to USD
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  const double usd_per_eur{1.19};

  cout << "Welcome to the EUR to USD converter" << endl;

  double euros{0.0};
  double dollar{0.0};

  cout << "Enter the value in EUR: ";
  cin >> euros;
  dollar = euros * usd_per_eur;

  cout << euros << " euros is equivalent to " << dollar << " dollars" << endl;
  return 0;
}
