#include <iostream>
using namespace std;

/* this will be a text based choose-your-own-adventure game that will give some context and ask for user input. */

int main() {
  string userResponse;
  cout << "hello friend! are you ready for an adventure?\n";
  getline (cin, userResponse); //using getline to capture multiple words if needed
  cout << "your response was: " << userResponse << "\n";
  cout << "please enter a different word for testing purposes: ";
  getline (cin,userResponse);
  cout << "your response has been changed to: " << userResponse << "\n\n";
  //here is where i will put some more code
  return 0;
}
