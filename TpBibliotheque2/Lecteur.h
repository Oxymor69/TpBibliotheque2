#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "Emprunt.h"

using namespace std;

class Lecteur {
private:
	string Identifiant;
	string Nom;
	string Prenom;
	vector<int> listeISBN;

public:
	Lecteur(string Identifiant, string Nom, string Prenom, vector<int> listeISBN);
	string getIdentifiant();
	string getNom();
	string getPrenom();
	vector<int> getlisteISBN();
	friend ostream& operator<<(ostream& os, const Lecteur& LecteurCrea);
};