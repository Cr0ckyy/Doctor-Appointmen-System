#include "Patient.h";
#include "Person.h";
#include "Medicine.h";
#include <string>
#include <list>
#include <utility>

Patient::Patient() :
        Address("No Address"), Person(0, "No Name", "No Name") {
}

Patient::Patient(int id, string firstName, string lastName, string address) :
        Address(std::move(address)), Person(id, std::move(firstName), std::move(lastName)) {
}

Patient::Patient(int id, string firstName, string lastName, string address,
                 string username, string password) :
        Address(std::move(address)), Person(id, std::move(firstName), std::move(lastName)),
        Username(std::move(username)), Password(std::move(password)) {
}

Patient::Patient(int id, string firstName, string lastName, string address, string username, string password,
                 string dateOfHisReservation) :
        Address(std::move(address)), Person(id, std::move(firstName),
                                            std::move(lastName)), Username(std::move(username)),
        Password(std::move(password)),
        DateOfHisReservation(std::move(dateOfHisReservation)) {
}

string Patient::getAddress() {
    return this->Address;
}

string Patient::getUsername() {
    return this->Username;
}

string Patient::getPassword() {
    return this->Password;
}

string Patient::getDateOfHisReservation() {
    return this->DateOfHisReservation;
}

list<Medicine> &Patient::getListOfMedicine() {
    return this->Medicines;
}


void Patient::setUsernameAndPassword(string username, string password) {
    this->Username = std::move(username);
    this->Password = std::move(password);
}


void Patient::reverseDate(int day, int month, int year) {
    string date = to_string(day) + '/' + to_string(month) + '/' + to_string(year);
    this->DateOfHisReservation = date;
}

void Patient::setListOfMedicine(list<Medicine> list) {
    this->Medicines = std::move(list);
}

void Patient::addMedicineToList(const Medicine& medicine) {
    this->Medicines.push_front(medicine);
}

