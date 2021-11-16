#ifndef FRACTION_H
#define FRACTION_H

#include <QString>

class Fraction
{
private:
    int m_Numerator, m_Denominator;
public:
    void set(int, int);
    QString toString();
    double toDouble();
    Fraction add(const Fraction&); // funkcje z podstawowymi operacjami arytmetycznymi, wykorzystujące obiekt i jego pochodną 'other'
    Fraction subtract(const Fraction&);
    Fraction multiply(const Fraction&);
    Fraction divide(const Fraction&);
};

#endif // FRACTION_H
