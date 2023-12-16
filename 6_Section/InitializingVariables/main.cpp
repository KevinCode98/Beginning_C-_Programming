#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int room_width {};
  int room_length {};
  cout << "Enter the width of the room: ";
  cin >>room_width;
  
  cout << "Enter the length of the room: ";
  cin >>room_length;

  cout << "The area of the room is "<< room_width * room_length << " squeare feet" << endl;
  return 0;
}
