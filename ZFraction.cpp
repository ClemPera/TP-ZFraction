#include "ZFraction.h"

using namespace std;

//Constructeurs

<<<<<<< HEAD
ZFraction::ZFraction(int num, int denum) // si les deux sont rentrer
{
    m_numerateur = num;
    m_denominateur = denum;
}

ZFraction::ZFraction(int num) // si 1 seul argument est rentrï¿½
{
    m_denominateur = 1;
    m_numerateur = num;
}

ZFraction::ZFraction() // si aucun argument est rentrï¿½
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
=======
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
>>>>>>> refs/remotes/origin/master
}
