#ifndef DEF_Player
#define DEF_Player

#include <string>

class Player
{
    public:

    void (int music);
    void chanter(Player &cible);
    void PuissanceDeChant(int quantitePuissance);
    void changerInstrument(std::string nomNouvelInstrument, int PuissanceNouvelInstrument);
    bool estVivant();

    private:

    int m_scoreVie;
    int m_puissance;
    int 
    std::string m_nomInstrument 
};

#endif