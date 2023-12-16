/*********************************
 * Author Kevin Carrillo 
 *
 * 20-May-23 Kevin - fixed bug in...
 * 14-Jun-23 Max - Added function to...
 *
 * ******************************/

#include <iostream>

// This is a comment

/* This is a multiple
   line
   comment
*/

// Using a modified version Dijkstra's algorith to improve space efficiency

int main(){
  int favorite_number{}; // This is where my favorite number is stored
  
  std::cout << "Enter your favoirte number between 1 and 100: ";
  std::cin >> favorite_number;   /* comment */

  std::cout << "Amazing!! That's my favorite number too!" << std::endl;
  std::cout << "No really!!, "<< favorite_number << " is my favorite number!" << std::endl;

  return 0;
}
