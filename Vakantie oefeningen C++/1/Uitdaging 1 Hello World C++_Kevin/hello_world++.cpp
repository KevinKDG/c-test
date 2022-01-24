/* Gemaakt door Kevin Vervloet 
 Oefenen met C++ in Visuel studio code

 Opdracht 1: Maak een programma dat je groet, je naam in leest en dan hallo je naam geeft.  

*/

#include <iostream>
#include <string>
#include "windows.h" 
using namespace std;

int vars() {
  string yourname;
  cout << "Type your name here: ";
  getline (cin, yourname);
  cout << "Ah, so your name is " << yourname << ", nice to meet you!";
  Sleep(3000);  
}

int main() {
  cout << "Welcome unknown user, i don't think we've met before\n";
  cout << "What is your name?\n";
  vars();
  return 0;
}
