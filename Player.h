#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

class Personnage
{
    public:

    void (int music);
    void chanter(Personnage &cible);
    void PuissanceDeChant(int quantitePuissance);
    void changerInstrument(std::string nomNouvelInstrument, int PuissanceNouvelInstrument);
    

    private:

    int m_vie;
    int m_mana;
    std::string m_nomMusic; //Pas de using namespace std, il faut donc mettrestd:: devant string
    int m_score;
};

#endif