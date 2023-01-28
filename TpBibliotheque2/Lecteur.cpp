#include "Lecteur.h"

Lecteur::Lecteur(string IdLecteur, string NomLecteur, string PrenomLecteur, vector<int> lisISBN)
{
    Identifiant = IdLecteur;
    Nom = NomLecteur;
    Prenom = PrenomLecteur;
    listeISBN = lisISBN;
}

std::ostream& operator<<(ostream& os, const Lecteur& LecteurCrea)
{

    os << LecteurCrea.Identifiant << "\n" << LecteurCrea.Nom << "\n" << LecteurCrea.Prenom << "\n";
    for (auto ISBN : LecteurCrea.listeISBN)
    {
        os << ISBN << " ";
    }
    return os;
}

string Lecteur::getIdentifiant()
{
    return Identifiant;
}

string Lecteur::getNom()
{
    return Nom;
}

string Lecteur::getPrenom()
{
    return Prenom;
}

vector<int> Lecteur::getlisteISBN()
{
    return listeISBN;
}
