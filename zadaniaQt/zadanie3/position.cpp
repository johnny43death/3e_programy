#include "position.h"

#include <utility>

Position::Position(QString mName, QString mDescription) : m_Name(std::move(mName)), m_Description(std::move(mDescription)) {}

QString Position::toString(){
    return this->m_Name + " - " + this->m_Description;
}
