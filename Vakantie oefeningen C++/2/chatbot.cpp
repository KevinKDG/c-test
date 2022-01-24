/* Gemaakt door Kevin Vervloet 
 Oefenen met C++ in Visuel studio code

 Opdracht 2: Maak een chatbot

*/

#include <iostream>
#include <string>
#include <list>
#include "windows.h" 
using namespace std;


int responses() {
    list<int>list1;
    list<int>::iterator l_iter;
    cout << "--------------------------------------------------------------------\n";
    cout << "[1] Waar woon ik? | [2] Crusty Crab | [3] Naam | [4] Bekijk antwoorden\n";
    cout << "--------------------------------------------------------------------\n";
    int antwoorden;
    cout << "welke optie wil je bekijken?: ";
    cin >> antwoorden;
    if (antwoorden == 1) {
    list1.push_back(1);
    cout << "Ik woon in een ananas diep in de zee!\n";
    Sleep(2000);  
    responses();
}
else if (antwoorden == 2) {
    list1.push_back(2);
    cout << "Ik werk in de Crusty Crab! Ik ben een kok :)\n";
    Sleep(2000); 
    responses();
}
else if (antwoorden == 3) {
    list1.push_back(3);
    cout << "Mijn volledige naam is SpongeBob SquarePants\n";
    cout << "Heeft dit jouw geholpen?\n";
    Sleep(2000); 
    responses();
}
else if (antwoorden == 4) {
    list1.push_front(4);
    cout << "Dit zijn jouw laatste vijf antwoorden: ";
    for (l_iter = list1.begin(); l_iter != list1.end(); l_iter++)
    cout<< *l_iter<<endl;

    cout << endl;
    
}

    
    

}

int main() {
  cout << "Hoi, mijn naam is Spongebob. Heb je een vraag voor mij?\n";
  responses();
  return 0;
}
