#include "person.h"

#include <utility>

Person::Person(QString mName) : m_Name(std::move(mName)) {}

QString Person::toString() {
    return this->m_Name + ": " + (this->m_Employed ? (this->m_employer->toString() + " at " + this->m_position->toString()) : "not employed");
}

void Person::setPosition(Employer *employer, Position *position) {
    this->m_employer = employer;
    this->m_position = position;
    this->m_Employed = true;
}

const Position &Person::getPosition() const {
    if(!this->m_Employed){
        return *new Position("Bezrobotny ","Ksieciuniu poratuj");
    }
    return *m_position;
}

const Employer &Person::getEmployer() const {
    if(!this->m_Employed){
        return *new Employer("Urzad Pracy","zatrudnij mnie księciuniu");
    }
    return *m_employer;
}
