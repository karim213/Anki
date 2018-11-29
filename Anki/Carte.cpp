#include "Carte.h"

using namespace std;

Carte::Carte(string recto , string verso)
{
    this->recto = recto;
    this->verso = verso;
}


//inutile
string Carte::afficherRecto(){

}

string Carte::getRecto(){
     return this->recto;
}


//inutile
string Carte::afficherVerso(){

}

string Carte::getVerso(){
     return this->verso;
}

void Carte::validerCarte(string avis){
     this->avis = avis;
}

void Carte::setEtat(string  avis){

}


//l'ajout va etre dans la bdd
void Carte::evaluerCarte(note){

}


//l'ajout va etre dans la bdd
void Carte::acceptationCarte(int avis , int idModerateur){

}

