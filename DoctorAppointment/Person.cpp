#include "Person.h"

#include <utility>

Person::Person() {
    ID = 0;
    FristName = "No Name";
    LastName = "No Name";
};

Person::Person(int id, string firstName, string lastName) :
        ID(id), FristName(std::move(firstName)), LastName(std::move(lastName)) {
};

int Person::getId() const {
    return this->ID;
};

string Person::getFristName() {
    return this->FristName;
};

string Person::getLastName() {
    return this->LastName;
};