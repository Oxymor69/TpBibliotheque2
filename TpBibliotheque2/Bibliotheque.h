#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Livre.h"
#include "Emprunt.h"

using namespace std;

class Bibliotheque {
private:
    vector<Livre> livres;
    vector<Emprunt> emprunts;
    vector<Lecteur> lecteurs;
    vector<Auteur> auteurs;

public:
    Bibliotheque();
    Bibliotheque(vector<Livre> Livres, vector<Emprunt> Emprunts, vector<Lecteur> Lecteur, vector<Auteur> Auteur);
    void ajouterLivre(Livre livre);
    void ajouterAuteur(Auteur auteur);
    void ajouterLecteur(Lecteur lecteur);
    void emprunterLivre(string id_lecteur, int ISBN_livre, Date dateEmprunt);
    void rendreLivre(int ISBNrestituer, string id_lecteur);
    vector<Livre> getLivres();
    vector<Emprunt> getEmprunts();
    vector<Lecteur> getLecteur();
    void chercherLivresAuteur(string NomAuteur);
    void pourcentageLivreEmpruntes();
    void listeLivreEmprunterLecteur(string id_lecteur);
};