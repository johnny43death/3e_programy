#ifndef PERSON_H
#define PERSON_H

#include "QString"
#include "employer.h"

class Position;
class Employer;
class Person {
private:
    QString m_Name;
    bool m_Employed = false;
    Position *m_position{};
    Employer *m_employer{};
public:
    Person(QString mName);
    QString toString();
    void setPosition(Employer*, Position*);

    const Position &getPosition() const;
    const Employer &getEmployer() const;
};


#endif //PERSON_H
