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
    void afficherValeurs();

private:
    int num;
    int den;
    int m_numerateur;      //Le num�rateur de la fraction
    int m_denominateur;    //Le d�nominateur de la fraction

};

#endif
