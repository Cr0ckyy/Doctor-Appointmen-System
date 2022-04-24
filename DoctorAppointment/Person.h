#include <string>

using namespace std;
#pragma once

class Person {
private:
    int ID;
    string FristName;
    string LastName;

public:
    Person();

    Person(int id, string firstName, string lastName);

    int getId() const;

    string getFristName();

    string getLastName();
};

