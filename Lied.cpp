#include <iostream>
#include "Lied.h"
#include "DynArray.h"

void Lied::setTitel(string x){
    titel = x;
}

string Lied::getTitel(){
    return titel;
}

void Lied::setInterpret(string x){
    interpret = x;
}

string Lied::getInterpret(){
    return interpret;
}

void Lied::setErscheinungsjahr(int x){
    erscheinungsjahr = x;
}

int Lied::getErscheinungsjahr(){
    return erscheinungsjahr;
}

void Lied::setLaenge(int x){
    laenge = x;
}

int Lied::getLaenge(){
    return laenge;
}

void Lied::setGenre(string x){
    if (x == "pop")
        g = pop;
    if (x == "klassik")
        g = klassik;
    if (x == "hardrock")
        g = hard_rock;
    if (x == "rock")
        g = rock;
}

void Lied::einspeichern(DynArray &r){
    int i = r.size();
    string k;
    Lied li;
    
    cout << "Bitte den Titel eingeben: ";
    cin >> li.titel;
    cout << "Bitte den Interpreten eingeben: ";
    cin >> li.interpret;
    cout << "Bitte das Erscheinungsjahr eingeben: ";
    cin >> li.erscheinungsjahr;
    cout << "Bitte die Laenge eingeben: ";
    cin >> li.laenge;
    cout << "Bitte das Genre angeben: ";
    cin >> k;
    if (k == "pop") li.g = pop;
    if (k == "klassik") li.g = klassik;
    if (k == "rock") li.g = rock;
    if (k == "hardrock") li.g = hard_rock;
    
    r.push_back(li);
}

void Lied::ausgabe(){
    cout << "Titel: " << titel << endl;
    cout << "Interpret: " << interpret << endl;
    cout << "Erscheingsjahr: " << erscheinungsjahr << endl;        
    cout << "Laenge: " << laenge << endl;
    
    if (g == 0)
        cout << "Genre: Pop" << endl;
    if (g == 1)
        cout << "Genre: Rock" << endl;
    if (g == 2)
        cout << "Genre: Klassik" << endl;
    if (g == 3)
        cout << "Genre: Hard Rock" << endl;
    
    cout << endl;
}

void Lied::eintragloeschen(DynArray& r){
    int x;
    cout << "Welchen Eintrag moechten sie loeschen? " << endl;
    cin >> x;
    r.erase(x-1);
}

void Lied::eintragbearbeiten(DynArray &r){
    int x;
    string y;
    Lied li;
    
    cout << "Welchen Eintrag moechten sie bearbeiten? "<< endl;
    cin >> x;
    
    cout << "Was moechten sie bearbeiten?" << endl;
    cin >> y;

     if (y == "titel" | y == "Titel") {
            cout << "Bitte den Titel eingeben: ";
            cin >> titel;
            li.setTitel(titel);
            r.at(x-1).setTitel(titel);
        }
 
        if (y == "interpret" | y == "Interpret") {
            cout << "Bitte den Interpreten eingeben: ";
            cin >> interpret;
            r.at(x-1).setInterpret(interpret);
        }
 
        if (y == "erscheinungsjahr") {
            cout << "Bitte das Erscheingungsjahr eingeben: ";
            cin >> erscheinungsjahr;
            r.at(x-1).setErscheinungsjahr(erscheinungsjahr);
        }
 
        if (y == "laenge") {
            cout << "Bitte die Laenge des Liedes angeben: ";
            cin >> laenge;
            r.at(x-1).setLaenge(laenge);
        }
 
        if (y == "genre") {
            cout << "Bitte geben sie das Genre an: ";
            cin >> y;
            r.at(x-1).setGenre(y);
        }
        
  }
