#include <iostream>
using namespace std;

/* this will be a text based choose-your-own-adventure game that will give some context and ask for user input. */

int main() {
  
  string userResponse; //initialize user input variable
  bool goodEnding = true; //default to good ending until proven otherwise

  cout << "hello friend! are you ready for an adventure?\n";
  getline (cin, userResponse); //using getline to capture multiple words if needed

  if (userResponse == "yes") {
    cout << "fantastic, off we go then!\n";
  } else if (userResponse == "hell yes") {
    cout << "that's the spirit! let's go!\n";
  } else if (userResponse == "no") {
    cout << "damn that's no fun. i'm taking you on an adventure out of spite now.\n";
  } else {
    cout << "welp... i haven't been programmed to understand that answer, but i'll assume it was some form of yes! let's go!\n";
  }

  //cout << "your response was: " << userResponse << "\n";
  //cout << "please enter a different word for testing purposes: ";
  //getline (cin,userResponse);
  //cout << "your response has been changed to: " << userResponse << "\n\n";
  //here is where i will put some more code

  cout << "\n"; //print an empty line before end of program, looks nice
  return 0;
}
