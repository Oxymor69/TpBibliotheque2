#include "Emprunt.h"

Emprunt::Emprunt()
{
	return;
}

Emprunt::Emprunt(string id_lecteur, int ISBN_liv , Date Date_emprunt)
{
	identifiant_lecteur = id_lecteur;
	ISBN_Livre = ISBN_liv;
	DateEmprunt = Date_emprunt;

}

std::ostream& operator<<(ostream& os, const Emprunt& EmpruntCrea)
{

	os << "L'identifiant du lecteur est :\n " << EmpruntCrea.identifiant_lecteur << "\n" << "Le livre emprunté est le n° :\n" << EmpruntCrea.ISBN_Livre << "\n" << "La date de l'emprunt est :\n" << EmpruntCrea.DateEmprunt << "\n";

	return os;
}

string Emprunt::getidentifiant_lecteur(){
	return identifiant_lecteur;
}

int Emprunt::getISBN_Livre()
{
	return ISBN_Livre;
}

Date Emprunt::getDateEmprunt()
{
	return DateEmprunt;
}
