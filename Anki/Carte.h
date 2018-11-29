#ifndef CARTE_H
#define CARTE_H

class Carte
{
private :
std::string recto;
std::string verso;
std::string avis;
std::string niveau ;

public:
    Carte();
    std::string afficherRecto();
    std::string getRecto();
    std::string afficherVerso();
    std::string getVerso();
    void validerCarte(std::string avis);
    void setEtat(std::string  avis);
    void evaluerCarte(note);
    void acceptationCarte(int note , int idUtilisateur);


};

#endif // CARTE_H
