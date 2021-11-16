#include "fraction.h"

void Fraction::set(int numerator, int denominator) {
    this->m_Numerator = numerator;
    this->m_Denominator = denominator;
}

QString Fraction::toString() {
    return QString("%1 / %2").arg(m_Numerator).arg(m_Denominator);
}

double Fraction::toDouble() {
    return 1.0 * m_Numerator / m_Denominator;
}

Fraction Fraction::add(const Fraction& other) {
    Fraction output;
    if(m_Denominator == other.m_Denominator){
        output.set((m_Numerator + other.m_Numerator), m_Denominator);
    } else {
        int pom;
        int a = m_Denominator;
        int b = other.m_Denominator;
        while(b != 0){
            pom = b;
            b = a%b;
            a = pom;
        }
        int nwd = a;
        a = m_Denominator;
        b = other.m_Denominator;
        int commonDenominator = (a*b) / nwd;
        output.set(((m_Numerator * (commonDenominator / m_Denominator)) + (other.m_Numerator * (commonDenominator / other.m_Denominator))), commonDenominator);
    }
    return output;
}

Fraction Fraction::subtract(const Fraction& other) {
    Fraction output;
    if(m_Denominator == other.m_Denominator){
        output.set((m_Numerator + other.m_Numerator), m_Denominator);
    } else {
        int pom;
        int a = m_Denominator;
        int b = other.m_Denominator;
        while(b != 0){
            pom = b;
            b = a%b;
            a = pom;
        }
        int nwd = a;
        a = m_Denominator;
        b = other.m_Denominator;
        int commonDenominator = (a*b) / nwd;
        a = (m_Numerator * (commonDenominator / m_Denominator));
        b = (other.m_Numerator * (commonDenominator / other.m_Denominator));
        if(a > b){
            output.set((a - b), commonDenominator);
        } else {
            output.set(-(b - a), commonDenominator);
        }

    }
    return output;
}

Fraction Fraction::multiply(const Fraction& other) {
    Fraction output;
    output.set(m_Numerator, m_Denominator);
    output.m_Numerator = output.m_Numerator * other.m_Numerator;
    output.m_Denominator = output.m_Denominator * other.m_Denominator;
    return output;
}

Fraction Fraction::divide(const Fraction& other) {
    Fraction output;
    output.set(m_Numerator, m_Denominator);
    output.m_Numerator *= other.m_Denominator;
    output.m_Denominator *= other.m_Numerator;
    return output;
}
