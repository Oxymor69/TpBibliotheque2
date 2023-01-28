#include "Bibliotheque.h"
#include "Emprunt.h"
#include <cstdlib>

Bibliotheque::Bibliotheque() {
}

Bibliotheque::Bibliotheque(vector<Livre> Livres, vector<Emprunt> Emprunts, vector<Lecteur> Lecteur, vector<Auteur> Auteur) {
    livres = Livres;
    emprunts = Emprunts;
    lecteurs = Lecteur;
    auteurs = Auteur;
}

void Bibliotheque::ajouterLivre(Livre livre) {
    livres.push_back(livre);
}

void Bibliotheque::ajouterAuteur(Auteur auteur) {
    auteurs.push_back(auteur);
}

void Bibliotheque::ajouterLecteur(Lecteur lecteur) {
    lecteurs.push_back(lecteur);
}


void Bibliotheque::emprunterLivre(string id_lecteur, int ISBN_livre, Date dateEmprunt) {
    for (int j = 0; j < livres.size(); j++) {
        if (livres[j].getISBN() == ISBN_livre)
        {
            if (livres[j].getdispo() == true)
            {
                cout << " Le livre n'est pas disponible " << endl;
            }
            else
            {
                emprunts.push_back(Emprunt(id_lecteur, ISBN_livre, dateEmprunt));
                for (int i = 0; i < lecteurs.size(); i++) {
                    if (lecteurs[i].getIdentifiant() == id_lecteur) {
                        cout << "test" << endl;
                        lecteurs[i].getlisteISBN().push_back(ISBN_livre);
                    }
                }
                livres[j].setdispo(true);
            }
        }
    }
}


void Bibliotheque::rendreLivre(int ISBNrestituer, string id_lecteur) 
{
    for (int i = 0; i < lecteurs.size() ; i++) {
        if (lecteurs[i].getIdentifiant() == id_lecteur ) {
            cout << lecteurs[i].getIdentifiant() << endl;
            vector<int> isbnList = lecteurs[i].getlisteISBN();
            if (ISBNrestituer == lecteurs[i].getlisteISBN().front())
            {
                cout << " Le livre a bien été restitué " << endl;
                for (int j = 0; j < livres.size(); j++) {
                    if (livres[j].getISBN() == ISBNrestituer) 
                    {
                        livres[j].setdispo(false);
                    }
                }
           }
            else
            {
                cout << " Le livre ne peut pas être restituer " << endl;
            }
        }
    }
}


vector<Livre> Bibliotheque::getLivres() {
    return livres;
}

vector<Emprunt> Bibliotheque::getEmprunts() {
    return emprunts;
}

vector<Lecteur> Bibliotheque::getLecteur() {
    return lecteurs;
}

void Bibliotheque::chercherLivresAuteur(string NomAuteur) {
    for (int i = 0; i < livres.size(); i++) {
        if (livres[i].getAuteurLivre().getNomAuteur() == NomAuteur)
        {
            cout << " Le nom du livres est : " << livres[i].getTitre() << endl;
        }
    }
}

void Bibliotheque::pourcentageLivreEmpruntes() {
    float compter = 0;
    for (int i = 0; i < livres.size(); i++) {
        if (livres[i].getdispo() == true) {
            cout << " Le livre emprunte est : " << livres[i].getTitre() << endl;
            compter = compter + 1;
        }
    }
    double pourcentage = (compter/livres.size())*100;
    cout << pourcentage << " % " << endl;
}

void Bibliotheque::listeLivreEmprunterLecteur(string id_lecteur) {
    for (int i = 0; i < lecteurs.size(); i++) {
        if (lecteurs[i].getIdentifiant() == id_lecteur)
        {
            for (int j = 0; j < lecteurs[i].getlisteISBN().size(); j++)
            {
                cout << " Le livre empruntés n° : " << i << " est : " << lecteurs[i].getlisteISBN()[j] << endl;
            }
        }
        else
        {
            cout << " L'identifiant de lecteur est incorrect" << endl;
        }
    }
}