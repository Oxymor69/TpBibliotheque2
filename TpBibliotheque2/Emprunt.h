#pragma once

#include "Auteur.h"
#include "Lecteur.h"

class Emprunt {
private:
	string identifiant_lecteur;
	int ISBN_Livre;
	Date DateEmprunt;

public:
	Emprunt();
	Emprunt(string identifiant_lecteur, int ISBN_Livre, Date DateEmprunt);
	friend ostream& operator<<(ostream& os, const Emprunt& EmpruntCrea);
	string getidentifiant_lecteur();
	int getISBN_Livre();
	Date getDateEmprunt();
};