#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Emprunt.h"

using namespace std;
class Livre {
private:
	string Titre;
	Auteur AuteurLivre;
	string Langage;
	string Genre;
	Date Date_publication;
	int ISBN;
	vector<Emprunt> precedent_emprunts;
	bool dispo = false;

public:
	Livre(string Titre, Auteur AuteurLivre, string Langage, string Genre,Date Date_publication, int ISBN, vector<Emprunt> precedent_emprunts, bool dispo);
	Livre();
	string getTitre();
	Auteur getAuteurLivre();
	string getLangage();
	string getGenre();
	Date getDate_publication();
	int getISBN();
	vector<Emprunt> getprecedent_emprunts();
	bool getdispo();
	void setdispo(bool disponi);
	friend ostream& operator<<(ostream& os, const Livre& LivreCrea);
};