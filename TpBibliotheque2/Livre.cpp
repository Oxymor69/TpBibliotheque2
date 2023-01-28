#include "Livre.h"
#include <vector>
#include "Emprunt.h"

Livre::Livre() {
	return;
}

Livre::Livre(string TitreLivre, Auteur Auteur_Livre, string LangageLivre, string GenreLivre , Date Date_pub, int ISBNLivre, vector<Emprunt> pre_emprunts, bool disponible)
{
	Titre = TitreLivre;
	AuteurLivre = Auteur_Livre;
	Langage = LangageLivre;
	Genre = GenreLivre;
	Date_publication = Date_pub;
	ISBN = ISBNLivre;
	precedent_emprunts = pre_emprunts ;
	dispo = disponible;
}

std::ostream& operator<<(ostream& os, const Livre& LivreCrea)
{

	os << LivreCrea.Titre << "\n" << LivreCrea.AuteurLivre << "\n" << LivreCrea.Langage << "\n" << LivreCrea.Genre << "\n" << LivreCrea.Date_publication << "\n" << LivreCrea.ISBN << "\n" << LivreCrea.dispo;
	for (auto ISBN : LivreCrea.precedent_emprunts)
	{
		os << ISBN << " ";
	}
	return os;
}
string Livre::getTitre()
{
	return Titre;
}

Auteur Livre::getAuteurLivre()
{
	return AuteurLivre;
}

string Livre::getLangage()
{
	return Langage;
}

string Livre::getGenre()
{
	return Genre;
}

int Livre::getISBN() {
	return ISBN;
}

Date Livre::getDate_publication()
{
	return Date_publication;
}

vector<Emprunt> Livre::getprecedent_emprunts()
{
	return precedent_emprunts;
}

bool Livre::getdispo()
{
	return dispo;
}

void Livre::setdispo(bool disponi)
{
	dispo = disponi;
}