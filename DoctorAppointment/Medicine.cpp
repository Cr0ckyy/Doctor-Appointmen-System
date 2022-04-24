#include "Medicine.h"
#include <string>
#include <utility>

Medicine::Medicine() :
        ID(0), Name("No Name"), Description("No Description"), Price(0), DailyTakenTimes(0) {
}

Medicine::Medicine(int id, string name, string description, double price, int timesPerDay) :
        ID(id), Name(std::move(name)), Description(std::move(description)), Price(price), DailyTakenTimes(timesPerDay) {
}

string Medicine::getName() {
    return this->Name;
}

int Medicine::getID() const {
    return this->ID;
}

double Medicine::getPrice() const {
    return this->Price;
}

int Medicine::getTimesPerDay() const {
    return this->DailyTakenTimes;
}
