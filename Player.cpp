#include "Player.h"

using namespace std;

void Player::recevoirDegats(int nbDegats)
{
    m_scoreVie -= nbDegats;
   

    if (m_scoreVie < 0) 
    

void Player::chanter(Personnage &cible)
{   
}

void Player::PuissanceDeChant(int quantitePuissance)
{
    m_scoreVie += quantitePuissance;

    if (m_scoreVie > 100) 
    {
        m_scoreVie = 100;
    }
}

void Player::changerInstrument(string nomNouvelInstrument, int degatsNouvelInstrument)
{
    m_nomInstruement = nomNouvelInstrument;
    m_degatsInstrument = degatsInstrument;
}

bool Player::Joue()
{
    return m_scoreVie > 0;
}