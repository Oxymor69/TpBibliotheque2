#pragma once
#include "Date.h"

class Auteur {
private:
	int idNumerique;
	string nom;
	string prenom;
	Date dateNaissance;

public:
	Auteur();
	Auteur(int idNumerique, string nom, string prenom, Date DateNaissance);
	string getNomAuteur();
	int getidNumeriqueAuteur();
	string getPrenomAuteur();
	Date getDateNaissanceAuteur();
	friend ostream& operator<<(ostream& os, const Auteur& AuteurCrea);
};

