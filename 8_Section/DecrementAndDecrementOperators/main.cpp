// Section 8
/*
 *  Increment operator ++
 *  Decrement operator --
 *
 *  Increments or decrements its operand by 1
 *  Can be used with integers, floating points types and pointers
 *
 *  Prefix ++num;
 *  Posfix num++;
 *
 *  Don't overuse this operator!
 *  ALERT!!! Never use it twice for the same variable in the same statement!!
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int counter{10};
  int result{0};

  // Example 1 - simple Increments
  cout << "Counter: " << counter << endl;

  counter = counter + 1;
  cout << "Counter: " << counter << endl;

  counter++;
  cout << "Counter: " << counter << endl;

  ++counter;
  cout << "Counter: " << counter << endl;

  // Example 2 = preincrement
  cout << "--------------------------------------------------------" << endl;
  counter = 10;
  result = 0;

  cout << "Counter: " << counter << endl;

  result = ++counter;
  cout << "Counter: " << counter << endl;
  cout << "Result: " << result << endl;

  // Example 3 = post-increment
  cout << "--------------------------------------------------------" << endl;
  counter = 10;
  result = 0;

  cout << "Counter: " << counter << endl;
  result = counter++;
  cout << "Counter: " << counter << endl;
  cout << "Result: " << result << endl;

  // Example 4 
  cout << "--------------------------------------------------------" << endl;
  counter = 10;
  result = 0;

  cout << "Counter: " << counter << endl;
  result = ++counter + 10; // Note the pre increment
  cout << "Counter: " << counter << endl;
  cout << "Result: " << result << endl;

 // Example 5
  cout << "--------------------------------------------------------" << endl;
  counter = 10;
  result = 0;

  cout << "Counter: " << counter << endl;
  result = counter++ + 10; // Note the pre increment
  cout << "Counter: " << counter << endl;
  cout << "Result: " << result << endl;

    
  return 0;
}
