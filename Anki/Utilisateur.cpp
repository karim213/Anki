#include "Utilisateur.h"

using namespace std;

void Utilisateur::selectionnerPaquet(int idPaquet){
}

string  Utilisateur::creerCarte(string  Recto , string  Verso){
    new Carte(Recto , Verso);

}

string Utilisateur::creerPaquet(string  nom , string  categorie){
    new Paquet(nom , categorie);

}

void Utilisateur::afficherVerso(){


}

void Utilisateur::afficherRecto(){

}

void Utilisateur::evaluerCarte(int note , int idUtilisateur){

}


void Utilisateur::partagerPaquet(){

}

