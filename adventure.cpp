#include <iostream>
using namespace std;

/* this will be a text based choose-your-own-adventure game that will give some context and ask for user input. */

int main() {
  
  string userResponse; //initialize user input variable
  string pausePrompt; //initialize variable to pause the story and wait for user input
  bool goodEnding = true; //default to good ending until proven otherwise
  int secretsFound = 0; //keeps track of how many secret messages were found. total = 1

  cout << "hello friend! are you ready for an adventure?\n\n";
  getline (cin, userResponse); //using getline to capture multiple words if needed

  if (userResponse == "yes") {
    cout << "\nfantastic, off we go then!\n\n";
  } else if (userResponse == "hell yes") {
    cout << "\nthat's the spirit! let's go!\n\n";
    secretsFound += 1;
  } else if (userResponse == "no") {
    cout << "\ndamn that's no fun. i'm taking you on an adventure out of spite now.\n\n";
    goodEnding = false;
  } else {
    cout << "\nwelp... i haven't been programmed to understand that response, but i'll assume it was some form of yes! let's go!\n\n";
  }

  cout << "\npress enter to continue...\n";
  getline (cin, pausePrompt); //user will hit enter to continue the story
  cout << "\n";

  cout << "here is where we will describe the first scenario the player will face.\n\n";
  cout << "they will be presented with several enticing options, and must decide what to do next.\n\n";

  cout << "\npress enter to continue...\n";
  getline (cin, pausePrompt); //user will hit enter to continue the story
  cout << "\n";

  //cout << "your response was: " << userResponse << "\n";
  //cout << "please enter a different word for testing purposes: ";
  //getline (cin,userResponse);
  //cout << "your response has been changed to: " << userResponse << "\n\n";
  //here is where i will put some more code

  if (goodEnding) {
    cout << "\nand you lived happily ever after.\n\nthe end.\n\n";
  } else {
    cout << "\nand you died a horrible gruesome death.\n\nthe end.\n\n";
  }
  return 0;
}
