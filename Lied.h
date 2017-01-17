#pragma once
#include <iostream>
#include <string>

using namespace std;
class DynArray;

enum genre {pop, rock, klassik, hard_rock};

class Lied {
private:
    string titel;
    string interpret;
    int erscheinungsjahr;
    int laenge;
    genre g;
    int eintrag;
    
public:
	void setTitel(string x);
        string getTitel();
        void setInterpret(string x);
        string getInterpret();
        void setErscheinungsjahr(int x);
        int getErscheinungsjahr();
        void setLaenge(int x);
        int getLaenge();
        void setGenre(string x);
        genre getGenre();
        void einspeichern(DynArray &r);
        void ausgabe();
        void eintragloeschen(DynArray &r);
        void eintragbearbeiten(DynArray &r);
};
