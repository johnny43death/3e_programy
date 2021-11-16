#ifndef EMPLOYER_H
#define EMPLOYER_H

#include "QString"
#include "position.h"
#include "person.h"

class Person;
class Position;
class Employer {
private:
    QString m_Name;
    QString m_market;
public:
    bool hire(Person&, Position&);
    Employer(QString mName, QString mMarket);
    QString toString();
};


#endif //EMPLOYER_H
