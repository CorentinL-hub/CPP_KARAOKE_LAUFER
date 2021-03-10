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
    

    private:

    int m_scoreVie;
    int m_puissance;
    std::string m_nomMusic
};

#endif