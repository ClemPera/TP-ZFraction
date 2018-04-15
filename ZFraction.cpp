#include "ZFraction.h"

using namespace std;

//Constructeurs

ZFraction::ZFraction(int m_numerateur, int m_denominateur) // si les deux sont rentrer
{
    num = m_numerateur;
    den = m_denominateur;
}

ZFraction::ZFraction(int m_numerateur) // si 1 seul argument est rentré
{
    den = 1;
    num = m_numerateur;
}

ZFraction::ZFraction() // si aucun seul argument est rentré
{
    num = 0;
    den = 0;
}




void ZFraction::afficherValeurs()
{
    cout << "Valeur de la fraction : " << num << "/" << den << endl;
}

ZFraction::~ZFraction() //Destructeur
{
}
