#include "employer.h"

#include <utility>

Employer::Employer(QString mName, QString mMarket) : m_Name(std::move(mName)), m_market(std::move(mMarket)) {}

bool Employer::hire(Person &person, Position &position) {
    person.setPosition(this, &position);
    return true;
}

QString Employer::toString() {
    return m_Name + " - " + m_market;
}
