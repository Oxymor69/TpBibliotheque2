#include "Auteur.h"

Auteur::Auteur(int idNum, string nomAuteur, string prenomAuteur, Date DateNaissanceAuteur)
{
	idNumerique = idNum;
	nom = nomAuteur;
	prenom = prenomAuteur;
	dateNaissance = DateNaissanceAuteur;
}

Auteur::Auteur() {

}

std::ostream& operator<<(ostream& os, const Auteur& AuteurCrea)
{

	os << "L'auteur est :" << AuteurCrea.idNumerique << "\n" << AuteurCrea.nom << "\n" << AuteurCrea.prenom << "\n" << AuteurCrea.dateNaissance << endl;

	return os;
}

string Auteur::getNomAuteur()
{
	return nom;
}

int Auteur::getidNumeriqueAuteur()
{
	return idNumerique;
}

string Auteur::getPrenomAuteur()
{
	return prenom;
}

Date Auteur::getDateNaissanceAuteur()
{
	return dateNaissance;
}

