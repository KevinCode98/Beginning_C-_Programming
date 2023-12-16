// Section 6
// Challenge

/*
 * Kevin's Carpet Cleaning Service
 * Charges: 
 *  $25 per small room 
 *  $35 per large room
 *Sales tax rate is 6%
 Estimate are valid for 30 days

 Prompt the user fpr the number of small and large rooms they would like cleaned
 and provide an estimate such as: 

 Estimate for carpet cleaning service 
 Number of small rooms: 3
 Number of large rooms: 1
 Price per small rooms: $25
 Price per large rooms: $35
Cost: $110
Tax: $6.6
=============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int number_of_small_rooms{0};
  int number_of_large_rooms{0};
  const double price_per_small_room{25.0};
  const double price_per_large_room{35.0};
  const double sales_tax {0.06};
  const int estimate_expiry {30};

  cout << "Hello, Welcome to Kevin's Carpet Cleaning Service" << endl;
  cout << "How many small rooms would you like cleaned? ";
  cin >> number_of_small_rooms;


  cout << "How many large rooms would you like cleaned? ";
  cin >> number_of_large_rooms;
  
  double total_price = (number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room);

  cout << "Estimate for carpet cleaning service" << endl;
  cout << "Number of small rooms: " << number_of_small_rooms << endl;
  cout << "Number of large rooms: " << number_of_large_rooms << endl;
  cout << "Price per small room: $" << price_per_small_room << endl;
  cout << "Price per large room: $" << price_per_large_room << endl;
  cout << "Cost: $" << total_price << endl;
  cout << "Tax: $" << total_price * sales_tax << endl;
  cout << "============================================" << endl;
  cout << "Total estimate: $" << total_price + (total_price * sales_tax) << endl;
  cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
  
  return 0;
}
