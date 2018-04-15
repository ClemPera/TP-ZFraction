#include "ZFraction.h"

using namespace std;

//Constructeurs

ZFraction::ZFraction(int num, int denum) // si les deux sont rentrer
{
    m_numerateur = num;
    m_denominateur = denum;
}

ZFraction::ZFraction(int num) // si 1 seul argument est rentr�
{
    m_denominateur = 1;
    m_numerateur = num;
}

ZFraction::ZFraction() // si aucun argument est rentr�
{
    m_numerateur = 0;
    m_denominateur = 0;
}

ZFraction::~ZFraction() //Destructeur
{
}

int ZFraction::ValeursNum()
{
    return m_numerateur;
}

int ZFraction::Partage()
{
    // cout << m_denominateur << endl;
}

void ZFraction::afficherValeurs()
{
    cout << "Valeur de la fraction : " << m_numerateur << "/" << m_denominateur << endl;
}

int operator+(ZFraction const& a, ZFraction const& b)
{
    // int result = a.ValeursNum
    return a.ValeursNum();
}
