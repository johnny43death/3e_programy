#include "fraction.h"

#include <QString>

void Fraction::set(int numerator, int denominator) { // ustawianie wartości (coś jak konstruktor parametryczny)
    m_Numerator = numerator;
    m_Denominator = denominator;
}

QString Fraction::toString(){
    return QString("ulamek: %1 / %2 \n").arg(m_Numerator).arg(m_Denominator); // specjalny sposób wypisywania ułamków
}

double Fraction::toDouble(){
    return 1.0 * m_Numerator/m_Denominator;
}

Fraction Fraction::add(const Fraction& other){
    Fraction f;
    f.m_Numerator = m_Numerator * other.m_Denominator + m_Denominator * other.m_Numerator;
    f.m_Denominator = m_Denominator * other.m_Denominator;
    return f;
}

Fraction Fraction::subtract(const Fraction& other){
    Fraction f;
    f.m_Numerator = m_Numerator * other.m_Denominator - m_Denominator * other.m_Numerator;
    f.m_Denominator = m_Denominator * other.m_Denominator;
    return f;
}

Fraction Fraction::multiply(const Fraction& other){
    Fraction f;
    f.m_Numerator = m_Numerator * other.m_Numerator;
    f.m_Denominator = m_Denominator * other.m_Denominator;
    return f;
}

Fraction Fraction::divide(const Fraction& other){
    Fraction f;
    f.m_Numerator = m_Numerator * other.m_Denominator;
    f.m_Denominator = m_Denominator * other.m_Numerator;
    return f;
}
