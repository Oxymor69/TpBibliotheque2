#include <iostream>
#include "Lecteur.h"
#include "Auteur.h"
#include "Livre.h"
#include "Emprunt.h"
#include "Bibliotheque.h"

int main()
{
    Bibliotheque mabibliotheque;

    Auteur monAuteur1(23, "SOYEUX", "Lilian", Date(06, 10, 2000));
    mabibliotheque.ajouterAuteur(monAuteur1);
    Auteur monAuteur2(52, "RIVOIRE", "Thomas", Date(23, 10, 2000));
    mabibliotheque.ajouterAuteur(monAuteur2);
    Auteur monAuteur3(46, "ROLAND", "Alexis", Date(12, 5, 2000));
    mabibliotheque.ajouterAuteur(monAuteur3);

    Livre monLivre1("Le seigneur des anneaux", Auteur(01, "Tolkien", "JRR", Date(11, 8, 1942)), "Francais", "Science-fiction", Date(12, 9, 1965), 52563146, {}, true);
    mabibliotheque.ajouterLivre(monLivre1);
    Livre monLivre2("Harry Potter et la pierre philosophale", Auteur(02, "Rowling", "JK", Date(31, 7, 1965)), "Francais", "Fantastique", Date(1, 6, 1997), 45637829, {}, true);
    mabibliotheque.ajouterLivre(monLivre2);
    Livre monLivre3("Les misérables", Auteur(03, "Hugo", "Victor", Date(26, 2, 1802)), "Francais", "Roman historique", Date(4, 5, 1862), 12357894, {}, false);
    mabibliotheque.ajouterLivre(monLivre3);
    Livre monLivre4("To Kill a Mockingbird", Auteur(04, "Lee", "Harper", Date(28, 4, 1926)), "Anglais", "Roman", Date(11, 7, 1960), 34875346, {}, false);
    mabibliotheque.ajouterLivre(monLivre4);
    Livre monLivre5("The Great Gatsby", Auteur(05, "Fitzgerald", "F. Scott", Date(24, 9, 1896)), "Anglais", "Roman", Date(10, 4, 1925), 25478963, {}, false);
    mabibliotheque.ajouterLivre(monLivre5);
    Livre monLivre6("The Catcher in the Rye", Auteur(06, "Salinger", "JD", Date(1, 1, 1919)), "Anglais", "Roman", Date(16, 7, 1951), 34785962, {}, false);
    mabibliotheque.ajouterLivre(monLivre6);
    Livre monLivre7("1984", Auteur(07, "Orwell", "George", Date(25, 6, 1903)), "Anglais", "Science-fiction", Date(8, 6, 1949), 34578962, {}, false);
    mabibliotheque.ajouterLivre(monLivre7);
    Livre monLivre8("The Adventures of Huckleberry Finn", Auteur(12, "Twain", "Mark", Date(30, 11, 1835)), "Anglais", "Roman", Date(18, 7, 1884), 45678923, {}, false);
    mabibliotheque.ajouterLivre(monLivre8);
    Livre monLivre9("The Old Man and the Sea", Auteur(13, "Hemingway", "Ernest", Date(21, 7, 1899)), "Anglais", "Roman", Date(01, 9, 1952), 35678912, {}, true);
    mabibliotheque.ajouterLivre(monLivre9);
    Livre monLivre10("One Hundred Years of Solitude", Auteur(10, "García Márquez", "Gabriel", Date(6, 3, 1927)), "Espagnol", "Roman", Date(17, 5, 1967), 45637892, {}, false);
    mabibliotheque.ajouterLivre(monLivre10);


    Lecteur unLecteur1("toto", "RIVOIRE", "Thomas", {});
    mabibliotheque.ajouterLecteur(unLecteur1);
    Lecteur unLecteur2("lili", "ROLAND", "Alexis", {});
    mabibliotheque.ajouterLecteur(unLecteur2);



    std::cout << " 1 - Ajouter un auteur , 2 - Ajouter un livre, 3 - Ajouter un lecteur, 4 - Chercher tout les livres d'un auteur, 5 - Chercher tous les livres empruntes et de calculer le pourcentage de livres empruntes , 6 - Chercher tous les livres empruntes par un lecteur , 7 - Emprunter un livre , 8 - Rendre livre, 9 - Quitter" << endl;
    int choix;
    std::cin >> choix;

    do {
        switch (choix) {
            case 1: {
                string nom;
                string prenom;
                int id;
                Date date;
                std::cout << " Donner moi le nom" << endl;
                std::cin >> nom;
                std::cout << " Donner moi le prenom" << endl;
                std::cin >> prenom;
                std::cout << " Donner moi l'id " << endl;
                std::cin >> id;
                std::cout << " Donner moi la Date jj/mm/aaaa " << endl;
                char fill = '/';
                string entered_date;
                int entered_month;
                int entered_year;
                int entered_day;
                std::cin >> entered_date;
                entered_month = stoi(entered_date.substr(3, 2));
                entered_day = stoi(entered_date.substr(0, 2));
                entered_year = stoi(entered_date.substr(6));

                Auteur monAuteur(id, nom, prenom, Date(entered_day, entered_month, entered_year));
                mabibliotheque.ajouterAuteur(monAuteur);
                break;
            }
            case 2: {
                std::cout << "Entrez les informations suivantes pour ajouter un livre : " << endl;
                string titre;
                std::cout << "Titre : ";
                std::cin >> titre;
                std::cout << "Auteur : ";
                string nom;
                string prenom;
                int id;
                Date date;
                std::cout << " Donner moi le nom" << endl;
                std::cin >> nom;
                std::cout << " Donner moi le prenom" << endl;
                std::cin >> prenom;
                std::cout << " Donner moi l'id " << endl;
                std::cin >> id;
                std::cout << " Donner moi la Date jj/mm/aaaa " << endl;
                char fill = '/';
                string entered_date;
                int entered_month;
                int entered_year;
                int entered_day;
                std::cin >> entered_date;
                entered_month = stoi(entered_date.substr(3, 2));
                entered_day = stoi(entered_date.substr(0, 2));
                entered_year = stoi(entered_date.substr(6));
                string langue;
                std::cout << "Langue : ";
                std::cin >> langue;
                string genre;
                std::cout << "Genre : ";
                std::cin >> genre;
                string entered_date2;
                std::cout << " Donner moi la Date jj/mm/aaaa " << endl;
                char fill2 = '/';
                int entered_month2;
                int entered_year2;
                int entered_day2;
                std::cin >> entered_date2;
                entered_month2 = stoi(entered_date2.substr(3, 2));
                entered_day2 = stoi(entered_date2.substr(0, 2));
                entered_year2 = stoi(entered_date2.substr(6));
                int ISBN;
                std::cout << "ISBN : ";
                std::cin >> ISBN;
                Livre monLivre(titre, Auteur(id, nom, prenom, Date(entered_day, entered_month, entered_year)), langue, genre, Date(entered_day2, entered_month2, entered_year2), ISBN, {}, false);
                mabibliotheque.ajouterLivre(monLivre);
                break;
            }
            case 3:
            {
                std::cout << "Entrez les informations suivantes pour ajouter un lecteur : " << endl;
                string identifiant;
                std::cout << "Identifiant : " << endl;
                std::cin >> identifiant;
                string nom;
                std::cout << "Nom : " << endl;
                std::cin >> nom;
                string prenom2;
                std::cout << "Prenom : " << endl;
                std::cin >> prenom2;
                Lecteur monLecteur(identifiant, nom, prenom2, {});
                mabibliotheque.ajouterLecteur(monLecteur);
                break;
            }
            case 4:
            {
                string auteur;
                std::cout << "Donner le nom de l'auteur : " << endl;
                std::cin >> auteur;
                mabibliotheque.chercherLivresAuteur(auteur);
                break;
            }
            case 5:
            {
                mabibliotheque.pourcentageLivreEmpruntes();
                break;
            }
            case 6:
            {
                string auteur;
                std::cout << "Donner le nom de l'auteur : " << endl;
                std::cin >> auteur;
                mabibliotheque.chercherLivresAuteur(auteur);
                break;
            }
            case 7:
            {
                string id_lecteur;
                std::cout << "Donner l'id du lecteur : " << endl;
                std::cin >> id_lecteur;
                int ISBN_livre;
                std::cout << "Donner l'ISBN du livre emprunte : " << endl;
                std::cin >> ISBN_livre;
                std::cout << " Donner moi la Date jj/mm/aaaa " << endl;
                char fill3 = '/';
                string entered_date3;
                int entered_month3;
                int entered_year3;
                int entered_day3;
                std::cin >> entered_date3;
                entered_month3 = stoi(entered_date3.substr(3, 2));
                entered_day3 = stoi(entered_date3.substr(0, 2));
                entered_year3 = stoi(entered_date3.substr(6));
                mabibliotheque.emprunterLivre(id_lecteur, ISBN_livre, Date(entered_day3, entered_month3, entered_year3));
                break;
            }
            case 8:
            {
                string id_lecteur;
                std::cout << "Donner l'id du lecteur : " << endl;
                std::cin >> id_lecteur;
                int ISBNrestituer;
                std::cout << "Donner l'ISBN du livre emprunte : " << endl;
                std::cin >> ISBNrestituer;
                mabibliotheque.rendreLivre(ISBNrestituer, id_lecteur);
                break;
            }
            case 9:
            {
                break;
            }
        } 
        std::cout << " 1 - Ajouter un auteur , 2 - Ajouter un livre, 3 - Ajouter un lecteur, 4 - Chercher tout les livres d'un auteur, 5 - Chercher tous les livres empruntes et de calculer le pourcentage de livres empruntes , 6 - Chercher tous les livres empruntes par un lecteur , 7 - Emprunter un livre , 8 - Rendre livre, 9 - Quitter" << endl;
        std::cin >> choix;
    }
    while (choix != 9);
}