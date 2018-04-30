#ifndef DEF_FRACTION
#define DEF_FRACTION

#include <iostream>

class ZFraction
{
public:
    ZFraction();
    ZFraction(int m_numerateur);
    ZFraction(int m_numinateur, int m_denominateur);
    ~ZFraction();
<<<<<<< HEAD

    int ValeursNum();
    int ValeursDenum();

    void afficherValeurs();
//    void calcul(operator operateur);

private:
  //  operator operateur;
    int num;
    int den;
    int m_numerateur;      //Le numï¿½rateur de la fraction
    int m_denominateur;    //Le dï¿½nominateur de la fraction

};

int operator+(ZFraction const& a, ZFraction const& b);

=======
    void afficherValeurs();

private:
    int num;
    int den;
    int m_numerateur;      //Le numérateur de la fraction
    int m_denominateur;    //Le dénominateur de la fraction

};

>>>>>>> refs/remotes/origin/master
#endif
